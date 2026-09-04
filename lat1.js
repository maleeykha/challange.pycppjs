function cekHoki(n) {
    if (n % 2 === 0 && n % 7 === 0) {
        console.log("HOKI");
    } else {
        console.log("BIASA");
    }
}

cekHoki(14);
cekHoki(10);
