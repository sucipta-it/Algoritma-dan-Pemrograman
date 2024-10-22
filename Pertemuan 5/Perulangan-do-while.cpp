#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari user
    cout << "Masukkan jumlah bintang pada baris awal : ";
    cin >> n;

    int i = n;

    // Perulangan do-while untuk menghasilkan pola bintang menurun
    do {
        int j = 0;
        do {
            cout << "*";
            j++;
        } while (j < i);

        cout << endl;
        i--;
    } while (i > 0);

    return 0;
}
