#include <iostream>
using namespace std;

int main () {
    int permen;
    cout << "Masukkan jumlah permen"; 
    cin >> permen;

    if (permen % 5 == 0) {
        cout << permen << " permen merupakan kelipatan 5" << endl;
} else {
        cout << permen << " permen bukan kelipatan 5" << endl;
        }
   
        return 0;
}