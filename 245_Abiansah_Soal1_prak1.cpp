#include <iostream>
using namespace std;

int main() {
    int kecepatan, waktu;
    
    cout << "Program Menghitung Jarak Tempuh" << endl;
    cout << "Masukkan kecepatan (km/jam): ";
    cin >> kecepatan;

    cout << "Masukkan waktu (jam): ";
    cin >> waktu;

    int jarak = kecepatan * waktu;


    cout << "Jarak tempuh = " << jarak << " km " << endl;

    return 0;
}