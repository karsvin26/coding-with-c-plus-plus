#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t       Bilangan Fibonacci \n\n\n");
    printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    system("Color 4F");
    int i,j,k,js,jd, hp;
    js=0;
    jd=0;
    i=1;
    j=0;
    printf("\n Masukkan jumlah suku = ");
    scanf("%i", &hp);
    printf("\n\n Deretnya adalah \n\n");
while(js<=hp)
    {
        if (js>=hp) break;
        printf(" %d\t ",j);
        js=js+1;
        jd=jd+j;
        k=i+j;
        i=j;
        j=k;;
    }
            printf("\n\n Jadi, jumlah deret = %d\n", jd);
            printf(" Jumlah Suku = %d\n\n", js);
            printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    getch();
}
