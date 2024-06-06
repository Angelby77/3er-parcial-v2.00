#include <iostream>
using namespace std;

int main() {
    int li;

    cout << "Introduce el numero limite: ";
    cin >> li;

    for (int i = 0; i <= li; i += 5) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}