#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari user
    cout << "Masukkan jumlah bintang pada baris awal : ";
    cin >> n;

    // Perulangan while untuk menghasilkan pola bintang menurun
    while (n > 0) {
        int i = 0;
        while (i < n) {
                cout << "*";
                i++;
        }
        cout << endl;
        n--;
    }

    return 0;
}
