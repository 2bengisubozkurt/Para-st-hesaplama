
#include <math.h>
#include <stdio.h>

int main() {
    float urun_tutari;
    float odenen_para;
    float para_ustu;
    // sayı ikiye bölünmüyorsa tam sayıdır

    int yuvarlamasiz_kurus;
    int kalan_kurus;
    int toplam_kupur;

    int adet_200_tl;
    int adet_100_tl;
    int adet_50_tl;
    int adet_20_tl;
    int adet_10_tl;
    int adet_5_tl;
    int adet_1_tl;
    int adet_50_kurus;
    int adet_25_kurus;
    int adet_10_kurus;
    int adet_5_kurus;
    int adet_1_kurus;

    printf("Urun tutarini TL olarak girin: ");
    scanf("%f", &urun_tutari);

    printf("Odenen parayi TL olarak girin: ");
    scanf("%f", &odenen_para);

    para_ustu = odenen_para - urun_tutari;

    yuvarlamasiz_kurus = (int)(para_ustu * 100.0f);
    kalan_kurus = (int)roundf(para_ustu * 100.0f);

    printf("\nPara ustu: %.2f TL\n", para_ustu);
    printf("Yuvarlamasiz hesap: %d kurus\n", yuvarlamasiz_kurus);
    printf("Yuvarlama ile bulunan dogru para ustu: %d kurus\n", kalan_kurus);

    adet_200_tl = kalan_kurus / 20000;
    kalan_kurus = kalan_kurus % 20000;

    adet_100_tl = kalan_kurus / 10000;
    kalan_kurus = kalan_kurus % 10000;

    adet_50_tl = kalan_kurus / 5000;
    kalan_kurus = kalan_kurus % 5000;

    adet_20_tl = kalan_kurus / 2000;
    kalan_kurus = kalan_kurus % 2000;

    adet_10_tl = kalan_kurus / 1000;
    kalan_kurus = kalan_kurus % 1000;

    adet_5_tl = kalan_kurus / 500;
    kalan_kurus = kalan_kurus % 500;

    adet_1_tl = kalan_kurus / 100;
    kalan_kurus = kalan_kurus % 100;

    adet_50_kurus = kalan_kurus / 50;
    kalan_kurus = kalan_kurus % 50;

    adet_25_kurus = kalan_kurus / 25;
    kalan_kurus = kalan_kurus % 25;

    adet_10_kurus = kalan_kurus / 10;
    kalan_kurus = kalan_kurus % 10;

    adet_5_kurus = kalan_kurus / 5;
    kalan_kurus = kalan_kurus % 5;

    adet_1_kurus = kalan_kurus;

    printf("\nVerilecek kupurler:\n");
    printf("200 TL: %d adet\n", adet_200_tl);
    printf("100 TL: %d adet\n", adet_100_tl);
    printf("50 TL: %d adet\n", adet_50_tl);
    printf("20 TL: %d adet\n", adet_20_tl);
    printf("10 TL: %d adet\n", adet_10_tl);
    printf("5 TL: %d adet\n", adet_5_tl);
    printf("1 TL: %d adet\n", adet_1_tl);
    printf("50 kurus: %d adet\n", adet_50_kurus);
    printf("25 kurus: %d adet\n", adet_25_kurus);
    printf("10 kurus: %d adet\n", adet_10_kurus);
    printf("5 kurus: %d adet\n", adet_5_kurus);
    printf("1 kurus: %d adet\n", adet_1_kurus);

    toplam_kupur = adet_200_tl + adet_100_tl + adet_50_tl
                 + adet_20_tl + adet_10_tl + adet_5_tl
                 + adet_1_tl + adet_50_kurus + adet_25_kurus
                 + adet_10_kurus + adet_5_kurus + adet_1_kurus;

    printf("Toplam kupur sayisi: %d\n", toplam_kupur);

    return 0;
}
