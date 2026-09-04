#include <iostream>
using namespace std;

void cekTilang(int plat, int tanggal) {
    if (plat % 2 == tanggal % 2) {
        cout << "AMAN";
    } else {
        cout << "TILANG";
    }
}

int main() {
    cekTilang(24, 12);

    return 0;
}
