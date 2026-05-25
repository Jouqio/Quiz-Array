#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array D
    int D[] = {11, 14, 7, 20, 25, 18, 9};
    int n = 7;

    int hitungGenap  = 0;  // Counter elemen genap
    int hitungGanjil = 0;  // Counter elemen ganjil
    int totalGenap   = 0;  // Akumulasi nilai bilangan genap

    for (int i = 0; i < n; i++) {
        if (D[i] % 2 == 0) {
            // Bilangan genap
            hitungGenap++;
            totalGenap += D[i];
        } else {
            // Bilangan ganjil
            hitungGanjil++;
        }
    }

    cout << "Array D: [11, 14, 7, 20, 25, 18, 9]" << endl;
    cout << "Jumlah elemen genap        : " << hitungGenap  << endl;
    cout << "Jumlah elemen ganjil       : " << hitungGanjil << endl;
    cout << "Total nilai bilangan genap : " << totalGenap   << endl;

    return 0;
}