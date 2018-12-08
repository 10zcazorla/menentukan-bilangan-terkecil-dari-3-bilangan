#include <stdio.h>
#include <conio.h>

using namespace std;

int minimum(int a, int b, int c);
int main (void)
{
    int a, b, c, min ;
    printf("\t\t_Program menentukan bilangan terkecil_\n\n");
    printf("Masukan bilangan ke-1 : ");scanf("%d", &a);
    printf("Masukan bilangan ke-2 : ");scanf("%d", &b);
    printf("Masukan bilangan ke-3 : ");scanf("%d", &c);
    min= minimum(a,b,c);
    printf("Bilangan terkecil adalah %d",min);
    getch();
}

int minimum(int a, int b, int c)
{
    int min ;
    if (a>b) {min=b;}
    else
    {
        min=a;
    }
    if (c<min) {min=c;}
    return (min);
}
