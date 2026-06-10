#include <stdio.h>

int main()
{
    printf("\t\t\t    BILANGAN BULAT ASCENDING \n\n\n");
    printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int a=1, jd=0, js=0,hp;
    system("Color 5F");
    printf("\n Masukkan Jumlah Suku = ");
    scanf("%i", &hp);
    printf("\n\n Deretnya adalah \n\n");
    while(js<=hp)
    {
        if(js>=hp)break;
        printf(" %d\t", a);
        jd=jd+a;
        js=js+1;
        a++;
    }
            printf("\n\n Jadi, jumlah deret\t = %d\n", jd);
            printf(" Jumlah suku\t\t = %d\n\n\n", js);
            printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    getch();
}
