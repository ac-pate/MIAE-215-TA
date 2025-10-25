#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> r >> c;

    if (r < 2 || c < 2) {
        cout << "numbers must be at least 2" << endl;
        return 0;
    }

    if (r > 26) {
        r = 26;
    }

    for (int i = 0; i < c; i++) {
        cout << "a";
    }
    cout << endl;

    for (int i = 1; i < r - 1; i++) {
        char ch = 'a' + i;
        cout << ch;
        for (int j = 1; j < c - 1; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }

    char last = 'a' + (r - 1);
    for (int i = 0; i < c; i++) {
        cout << last;
    }
    cout << endl;

    return 0;
}
