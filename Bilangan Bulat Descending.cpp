#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("\t\t\t    BILANGAN BULAT DESCENDING \n\n\n");
    printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    system("Color 5F");
    int a, jd, js;
    a=100;
    jd=0;
    js=0;
    for (a=100; a>-1; a=a-1)
    {
        printf(" %d\t", a);
        jd=jd+a;
        js=js+1;
    }
            printf("\n\n Jadi, jumlah deret\t = %d\n", jd);
            printf(" Jumlah suku\t\t = %d\n\n", js);
            printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    getchar();
}
