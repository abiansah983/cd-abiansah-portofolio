#include <iostream>
using namespace std;

int main() {
    int N;
    if (cin >> N) {
        bool first = true;
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0 && i % 4 != 0) {
                if (!first) {
                    cout << " ";
                }
                cout << i;
                first = false;
            }
        }
        cout << endl;
    }
    return 0;
}