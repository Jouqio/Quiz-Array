#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array E
    int E[] = {3, 8, 12, 17, 25, 31, 40};
    int n      = 7;
    int target = 25;    // Data yang dicari
    int indeks = -1;    // Default: tidak ditemukan

    cout << "Array E: [3, 8, 12, 17, 25, 31, 40]" << endl;
    cout << "Mencari angka: " << target << endl;
    cout << "-----------------------------------" << endl;

    // Linear Search: periksa satu per satu
    for (int i = 0; i < n; i++) {
        cout << "Periksa indeks " << i << ": E[" << i << "] = " << E[i];
        if (E[i] == target) {
            indeks = i;
            cout << " => DITEMUKAN!" << endl;
            break;  // Hentikan pencarian
        } else {
            cout << " => bukan, lanjut..." << endl;
        }
    }

    cout << "-----------------------------------" << endl;
    if (indeks != -1) {
        cout << "Angka " << target << " ditemukan pada indeks ke-" << indeks << endl;
    } else {
        cout << "Angka " << target << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}