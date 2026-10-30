#include <iostream>
using namespace std;

int main() {
int jumlah_makanan, jumlah_minuman;
const int HARGA_MAKANAN = 15000;
const int HARGA_MINUMAN = 5000;

cout << "Masukkan jumalah makanan: ";
cin >> jumlah_makanan;

cout << "masukkan jumlah minuman: ";
cin >> jumlah_minuman;

int total = ( jumlah_makanan * HARGA_MAKANAN) + ( jumlah_minuman * HARGA_MINUMAN);

cout << "Total pengeluaran = Rp " << total << endl;

return 0;
}