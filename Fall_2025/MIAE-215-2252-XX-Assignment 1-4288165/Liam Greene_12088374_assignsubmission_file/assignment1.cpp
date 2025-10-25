#include <iostream>
using namespace std;
int main() {
    cout << "Input X and Y: " << endl;
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= x; j++) {
            if (j == 1|| j == x) {
                cout << "|";
            } else if (i == 1 || i == y){
                cout << "—";
            } else cout << " ";
        }
        cout << endl;
    }
    return 0;
}