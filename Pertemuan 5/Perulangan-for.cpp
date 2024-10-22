#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari user
    cout << "Masukkan jumlah bintang pada baris awal : ";
    cin >> n;

    // Perulangan for untuk menghasilkan pola bintang menurun
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
