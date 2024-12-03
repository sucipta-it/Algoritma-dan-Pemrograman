#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function untuk menghasilkan angka acak
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Procedure untuk menampilkan hasil akhir permainan
void displayResult(bool win, int randomNumber) {
    if (win) {
        cout << "Selamat! Anda berhasil menebak angka dengan benar.\n";
    } else {
        cout << "Sayang sekali! Anda kehabisan kesempatan.\n";
        cout << "Angka yang benar adalah: " << randomNumber << endl;
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed untuk angka acak
    int choice;

    do {
        cout << "\n=== Game Tebak Angka ===\n";
        cout << "1. Mulai Permainan\n";
        cout << "2. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int min = 1, max = 100;
                int randomNumber = generateRandomNumber(min, max);
                int guess;
                int attempts = 5;
                bool win = false;

                cout << "Tebak angka antara " << min << " hingga " << max << "!\n";
                cout << "Anda memiliki " << attempts << " kesempatan.\n";

                for (int i = 1; i <= attempts; i++) {
                    cout << "Tebakan ke-" << i << ": ";
                    cin >> guess;

                    if (guess == randomNumber) {
                        win = true;
                        break;
                    } else if (guess < randomNumber) {
                        cout << "Terlalu kecil!\n";
                    } else {
                        cout << "Terlalu besar!\n";
                    }
                }

                displayResult(win, randomNumber);
                break;
            }
            case 2:
                cout << "Terima kasih telah bermain!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }
    } while (choice != 2);

    return 0;
}

