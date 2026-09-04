def hitungKopi(jumlahGelas):
    total = jumlahGelas * 5000

    if jumlahGelas > 3:
        total -= 2000

    return total

print(hitungKopi(2))
print(hitungKopi(4))
