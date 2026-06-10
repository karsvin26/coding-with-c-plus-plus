#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char menu [3];
    printf("\t\t\t\t Pola Kalkulator \n\n\n");
    printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    system("COLOR F1");

    int h, v, r;

    menu :
        printf("\n\n");
        printf(" Jenis Perhitungan : \n\n");
        printf("\t 1. Penjumlahan [+]\n");
        printf("\t 2. Pengurangan [-]\n");
        printf("\t 3. Perkalian   [*]\n");
        printf("\t 4. Pembagian   [/]\n\n\n\n");
        printf("Masukkan pilihan :\t");
        scanf("%s", menu);

        if(strcmp(menu,"1")==0)
        {
            system("cls");
            printf("\n");
            printf("Pertambahan (+) \n");
            printf("Input Angka Pertama\t");
            scanf("%d", &h);
            printf("\n");
            printf("Input Angka Terakhir\t");
            scanf("%d", &v);
            r=h+v;
            printf("\n");
            printf("Hasil Perhitungan : %d+%d=%d\n", h, v, r);
        }
        if(strcmp(menu, "2")==0)
        {
            system("cls");
            printf("\n");
            printf("Pengurangan (-) \n");
            printf("Input Angka Pertama\t");
            scanf("%d", &h);
            printf("\n");
            printf("Input Angka Terakhir\t");
            scanf("%d", &v);
            r=h-v;
            printf("\n");
            printf("Hasil Perhitungan : %d-%d=%d\n", h, v, r);
        }
        if(strcmp(menu, "3")==0)
        {
            system("cls");
            printf("\n");
            printf("Perkalian (*) \n");
            printf("Input Angka Pertama\t");
            scanf("%d", &h);
            printf("\n");
            printf("Input Angka Terakhir\t");
            scanf("%d", &v);
            r=h*v;
            printf("\n");
            printf("Hasil Perhitungan : %d*%d=%d\n", h, v, r);
        }
        if(strcmp(menu, "4")==0)
        {
            system("cls");
            printf("\n");
            printf("Pembagian (/) \n");
            printf("Input Angka Pertama\t");
            scanf("%d", &h);
            printf("\n");
            printf("Input Angka Terakhir\t");
            scanf("%d", &v);
            r=h/v;
            printf("\n");
            printf("Hasil Perhitungan : %d/%d=%d\n", h, v, r);
        }
        if(strcmp(menu, "#")==0)
        {
            return 0;
        }
        system("pause");
        system("cls");
        printf("\n");
        goto menu;
}
