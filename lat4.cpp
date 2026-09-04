#include <iostream>
using namespace std;

int hitungKopi(int jumlahGelas) {
    int total = jumlahGelas * 5000;

    if (jumlahGelas > 3) {
        total -= 2000;
    }

    return total;
}

int main() {
    cout << hitungKopi(2) << endl;
    cout << hitungKopi(4) << endl;

    return 0;
}
