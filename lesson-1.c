#include <stdio.h>
#include <stdlib.h>

int Permutasyon(int x,int y);
void DikdortgenCiz();
void Kombinasyon();
void Fibonacci();
void UpperCase();
void NotSistemi();

char secim = '0';

int main()
{
  while(1){


        printf("Menuden seciniz:  \n 1.Dikdortgen Cizme \n 2.Permutasyon \n 3.Kombinasyon \n 4.Fibonacci \n 5.Upper-Lower Case \n 6.Not Sistemi \n 7.Cikis \n");

        scanf(" %c",&secim);

        switch(secim)
        {
        case '1':
            printf("\n");
            DikdortgenCiz();
            printf("\n");
            break;
        case '2':
            printf("\n");
            Permutasyon(6,4);
            printf("\n");
            break;
        case '3':
            printf("\n");
            Kombinasyon();
            printf("\n");
            break;
        case '4':
            printf("\n");
            Fibonacci();
            printf("\n");
            break;
        case '5':
            printf("\n");
            UpperCase();
            printf("\n");
            break;
        case '6':
            printf("\n");
            NotSistemi();
            printf("\n");
            break;

        case '7':
            printf("\n");
            printf("Sistemden cikis yaptiniz\n");
            return 0;

        default:
            printf("\n");
            printf("Hatali Giris Yaptiniz.");
            printf("\n");
            break;
        }
  }


}



void DikdortgenCiz()
{

    int Satir=5;
    int Sutun=15;
    for(int i=0; i<Satir; i++)
    {
        for(int j=0; j<Sutun; j++)
        {
            printf("X");
        }
        printf("\n");
    }
}

int Permutasyon(int x,int y)
{
    int toplam=1;
    printf("6 arkadastan 4’u fotograf cekilecektir. Bu 4 kisi kac farkli sekilde siralanabilir sorusunun cevabi: ");
    for(int i=x; i>(x-y); i--)
    {
        toplam=toplam*i;
    }
    printf("%d'dir. \n",toplam);

    return toplam;

}

void Kombinasyon()
{
    int x=5,y=2,toplam1=1,toplam2=1,sonuc=0;
    toplam1=Permutasyon(x,y);
    for(int i=1; i<=y; i++)
    {
        toplam2=toplam2*i;
    };
    sonuc = toplam1/toplam2;
    printf("%d'dir. \n",sonuc);

}

void Fibonacci()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Kaç adet sayı yazılacağını seçin: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n+1; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

void UpperCase()
{

    char string[8]="MeRhAbA";
    int c = 0;
    printf("Yazimizin ilk hali %s'dir\n",string);

    while (string[c] != '\0')
    {
        if (string[c] >= 'a' && string[c] <= 'z')
        {
            string[c] = string[c] - 32;
        }
        c++;
    }
    printf("Yazimizin son hali %s'dir\n",string);
}

void NotSistemi()
{

    int not=64;
    char harfnotu;

    if(not<50)
        harfnotu='F';
    else if(not<60)
        harfnotu='D';
    else if(not<70)
        harfnotu='C';
    else if(not<80)
        harfnotu='B';
    else
        harfnotu='A';


printf("%d Notunu Alan Ogrencinin Harf Notu %c'dir.",not,harfnotu);
}
