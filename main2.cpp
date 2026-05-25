#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array B
    int B[] = {15, 9, 27, 6, 18, 27, 12};
    int n = 7;

    // Asumsikan elemen pertama sebagai max dan min
    int maxVal = B[0];
    int minVal = B[0];

    // Cari nilai terbesar dan terkecil
    for (int i = 1; i < n; i++) {
        if (B[i] > maxVal) maxVal = B[i];  // Perbarui max
        if (B[i] < minVal) minVal = B[i];  // Perbarui min
    }

    // Hitung frekuensi kemunculan nilai terbesar
    int frekuensi = 0;
    for (int i = 0; i < n; i++) {
        if (B[i] == maxVal) frekuensi++;
    }

    cout << "Array B: [15, 9, 27, 6, 18, 27, 12]" << endl;
    cout << "Nilai terbesar          : " << maxVal    << endl;
    cout << "Nilai terkecil          : " << minVal    << endl;
    cout << "Frekuensi nilai terbesar: " << frekuensi << " kali" << endl;

    return 0;
}