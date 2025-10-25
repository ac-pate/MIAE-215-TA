#include <iostream>
using namespace std;

void showMenu() {
    cout << "\nUNIT CONVERTER" << endl;
    cout << "1. Meters to Feet" << endl;
    cout << "2. Feet to Meters" << endl;
    cout << "3. Kilograms to Pounds" << endl;
    cout << "4. Pounds to Kilograms" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option (1-5): ";

}

int main() {
    int choice;
    double input, result;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter length in meters: ";
            cin >> input;
            result = input * 3.28084;
            cout << input << " meters = " << result << "feet" << endl;
            break;
        case 2:
            cout << "Enter length in feet:";
            cin >> input;
            result = input / 3.28083;
            cout << input << " feet = " << result << "meters" << endl;
            break;

        case 3:
            cout << " Enter weight in kilograms: ";
            cin >> input;
            result = input * 2.20462;
            cout << input << " kg = " << result << " lbs" << endl;
            break;

        case 4:
            cout << "Enter weight in pounds: ";
            cin >> input;
            result = input / 2.20462;
            cout << input << " lbs= " << result << " kg" << endl;
            break;

        case 5:
            cout << "Exiting program. Bye Bye" << endl;
            break;

        default:
            cout << "Oops wrong option!! choose a number from 1-5." << endl;
        }

    } while (choice != 5);

    return 0;
}
