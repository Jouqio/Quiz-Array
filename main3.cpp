#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array C
    int C[] = {2, 4, 6, 8, 10};
    int n = 5;

    // Tampilkan array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) cout << C[i] << " ";
    cout << endl;

    // Teknik dua pointer untuk membalik array
    int left  = 0;
    int right = n - 1;
    while (left < right) {
        // Tukar elemen kiri dan kanan
        int temp  = C[left];
        C[left]   = C[right];
        C[right]  = temp;

        left++;   // Geser pointer kiri ke kanan
        right--;  // Geser pointer kanan ke kiri
    }

    // Tampilkan array setelah dibalik
    cout << "Array setelah dibalik : ";
    for (int i = 0; i < n; i++) cout << C[i] << " ";
    cout << endl;

    return 0;
}