#include <stdio.h>
#include <math.h>
int c=0;
int a,b,sec;

int main(){

    while (c==0)
    {
        printf("\n\n\n\n\n1-Toplama\n2-Çıkarma\n3-Çarpma\n4-Bölme\n5-Üs alma\n");
        printf("Bir işlem seçin : ");
        scanf("%d",&sec);
        if (sec==1)
        {
            printf("1. sayıyı girin : ");
            scanf("%d",&a);
            printf("2. sayıyı girin : ");
            scanf("%d",&b);
            int toplam = a+b;
            printf("İşlem : %d + %d\nSonuç = %d",a,b,toplam);
        }

        else if (sec==2)
        {
            printf("1. sayıyı girin : ");
            scanf("%d",&a);
            printf("2. sayıyı girin : ");
            scanf("%d",&b);
            int cikar = a-b;
            printf("İşlem : %d - %d\nSonuç = %d",a,b,cikar);
        }

        else if (sec==3)
        {
            printf("1. sayıyı girin : ");
            scanf("%d",&a);
            printf("2. sayıyı girin : ");
            scanf("%d",&b);
            int carp = a*b;
            printf("İşlem : %d * %d\nSonuç = %d",a,b,carp);
        }

        else if (sec==4)
        {
            printf("1. sayıyı girin : ");
            scanf("%d",&a);
            printf("2. sayıyı girin : ");
            scanf("%d",&b);
            int bol = a/b;
            printf("İşlem : %d / %d\nSonuç = %d",a,b,bol);
        }

        else if (sec==5)
        {
            printf("Taban sayısını girin : ");
            scanf("%d",&a);
            printf("Üs sayısını girin : ");
            scanf("%d",&b);
            int us = pow(a, b);
            printf("İşlem : %d üssü %d\nSonuç = %d",a,b,us);
        }

        else
        {
            printf("Hatalı giriş çıkış yapılıyor");
            break;
        }
    }
    

    
    
    return 0;
}
