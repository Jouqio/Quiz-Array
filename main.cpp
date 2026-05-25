#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array A
    int A[] = {8, 12, 5, 20, 7};
    int n = 5;          // Jumlah elemen
    int total = 0;      // Variabel penampung jumlah

    // Loop untuk menjumlahkan semua elemen
    for (int i = 0; i < n; i++) {
        total += A[i];  // Tambahkan elemen ke-i ke total
    }

    // Hitung rata-rata (gunakan double agar desimal terjaga)
    double rata = (double)total / n;

    cout << "Array A: [8, 12, 5, 20, 7]" << endl;
    cout << "Jumlah seluruh elemen : " << total << endl;
    cout << "Rata-rata             : " << rata  << endl;

    return 0;
}