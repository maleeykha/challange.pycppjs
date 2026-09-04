#include <iostream>
using namespace std;

void cekHoki(int n) {
    if (n % 2 == 0 && n % 7 == 0) {
        cout << "HOKI";
    } else {
        cout << "BIASA";
    }
}

int main() {
    cekHoki(14);
    cekHoki(10);
  
    return 0;
}
