#include <stdio.h>

int hitungPerTarif(int jam, int biaya){
    int hari = jam / 24;
    int sisa = jam % 24;

    for(int i = 1; i <= sisa; i++) {
        if(i == 1) {
            biaya += 3000;
        } else {
            biaya += 2000;
        }
    }

    if(biaya > 15000) {
        biaya = 15000;
    }

    return biaya + (hari * 15000);
}

int main(){
    int menit;
    int biaya = 0;

    printf("Masukkan durasi parkir (menit): ");
    scanf("%d", &menit);
    while(menit <= 0) {
        printf("Durasi harus lebih dari nol\n");
        printf("Masukkan durasi parkir (menit): ");
        scanf("%d", &menit);
    }

    int jam = (menit + 59) / 60;
    printf("Durasi parkir : %d menit (ditagih %d jam)\n", menit, jam);

    int tarif = hitungPerTarif(jam, biaya);

    printf("Total biaya   : Rp%d\n", tarif);
}