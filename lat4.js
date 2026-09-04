function hitungKopi(jumlahGelas) {
    let total = jumlahGelas * 5000;

    if (jumlahGelas > 3) {
        total -= 2000;
    }

    return total;
}

console.log(hitungKopi(2));
console.log(hitungKopi(4));
