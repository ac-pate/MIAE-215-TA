#include <iostream>
int main()
{
    std::cout << "Made by Mathis Nkombou-Kamdoum" << std::endl;
    std::cout << "Insert the withd and the height of the rectangle :" << std::endl;
    int width, height;
    std::cin >> width >> height;

    for (int x = 0; x < width; x++)
        std::cout << "a";
    std::cout << std::endl;
    for (int y = 0; y < height - 2; y++)
    {
        std::cout << "b";
        for (int x = 0; x < width - 2; x++)
            std::cout << " ";
        if (width > 1)
            std::cout << "b";
        std::cout << std::endl;
    }
    if (height > 1)
    {
        for (int x = 0; x < width; x++)
            std::cout << "a";
        std::cout << std::endl;
    }
    return 0;
}