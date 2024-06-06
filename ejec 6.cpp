#include <iostream>
using namespace std;

int main() {
    int c;
    cout << "Dime el numero de tu carta: ";
    cin >> c;

    switch(c) {
        case 1:
            cout << "Es un As";
            break;
        case 10:
            cout << "Es un sota";
            break;
        case 11:
            cout << "Es un caballo";
            break;
        case 12:
            cout << "Es un rey";
            break;
        default:
            if (c > 2 && c < 9) {
                cout << "No es ninguna figura en la baraja española";
            } else {
                cout << "No es ninguna carta en una baraja española";
            }
            break;
    }

    return 0;
}