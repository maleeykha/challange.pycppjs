#include <iostream>
using namespace std;

int hitungTabungan(int hari) {
    int total = 0;

    for (int i = 1; i <= hari; i++) {
        if (i % 2 == 0) {
            total += 5000;
        } else {
            total += 2000;
        }
    }

    return total;
}

int main() {
    cout << hitungTabungan(3);

    return 0;
}
