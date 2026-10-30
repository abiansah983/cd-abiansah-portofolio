#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "Masukkan angka pilihan makanan (1-6): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
        cout << "nasi goreng" << endl;
        break;
        case 2:
        cout << "mie ayam" << endl;
        break;
        case 3:
        cout << "bakso" << endl;
        break;
        case 4:
        cout << "soto ayam" << endl;
        break;
        case 5:
        cout << "es moni" << endl;
        break;
        case 6:
        cout << " arak bali" << endl;
        break;

        default:
        cout << "input invalid" << endl;
    }
        return 0;
}

        
    
