#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Fungsi untuk mengacak angka
int generateRandomNumber(int min, int max) {
    static bool first = true;
    if (first) {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % (( max + 1 ) - min);
}

// Fungsi untuk memainkan permainan
void playGame(int saldo) {
    int tebakan;
    int taruhan;

    cout << "Selamat datang di permainan tebak angka!" << endl;
    cout << "Saldo Awal Anda: $" << saldo << endl;

    while (saldo > 0) {
        cout << "Masukkan taruhan Anda: $";
        cin >> taruhan;

        if (taruhan > saldo) {
            cout << "Saldo Anda tidak mencukupi untuk taruhan tersebut. Coba lagi." << endl;
            continue;
        }

        cout << "Tebak angka antara 1 dan 12: ";
        cin >> tebakan;

        int angkaAcak = generateRandomNumber(1, 100);

        cout << "Angka yang benar adalah: " << angkaAcak << endl;

        if (tebakan == angkaAcak) {
            cout << "Selamat! Anda menebak dengan benar!" << endl;
            saldo += taruhan;
        } else {
            cout << "Maaf, tebakan Anda salah." << endl;
            saldo -= taruhan;
        }

        cout << "Saldo Anda sekarang: $" << saldo << endl;

        if (saldo <= 0) {
            cout << "Maaf, saldo Anda habis. Permainan selesai." << endl;
            break;
        }

        char lanjut;
        cout << "Apakah Anda ingin melanjutkan? (y/n): ";
        cin >> lanjut;

        if (lanjut != 'y' && lanjut != 'Y') {
            cout << "Terima kasih telah bermain!" << endl;
            break;
        }
    }
}

int main() {
    cout << "===================================" << endl;
    cout << "   Selamat Datang di Tebak Angka   " << endl;
    cout << "===================================" << endl;
    cout << endl;

    int saldo;
    cout << "Masukkan saldo awal Anda: $";
    cin >> saldo;

    playGame(saldo);

    cout << "===================================" << endl;
    cout << "           Terima Kasih!            " << endl;
    cout << "===================================" << endl;

    return 0;
}

