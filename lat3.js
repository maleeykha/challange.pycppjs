function cekTilang(plat, tanggal) {
    if (plat % 2 === tanggal % 2) {
        console.log("AMAN");
    } else {
        console.log("TILANG");
    }
}

cekTilang(24, 12);
