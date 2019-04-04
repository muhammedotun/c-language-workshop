#include <stdio.h>
int main(int argc, char const *argv[]) {
  /*long long int - 8 byte - 64 bit
    int  - 4 bytee - 32 bit
    short - 2 byte - 16 bit
    char 1 byte - 8 bit
    double - 8 byte -64 bit
    float - 4 byte - 32 bit

    unsigned
    char 1 byte  8 bit 0000011
    ~(...00000101) +1  => 2 ye tümleme işlemi yapar
    a mod 4 => a&3; çünkü ...0011 den geliyor
    a/4 => a>>2 ;

*/
  if (a>5) {
    /* code */
  } else if (a<1) {
    /* code */
  } else {
    /* code */
  }
  // yukarıdaki şart koşul büyüktür küçüktür olduğunda if else yerine switch case yapısı
   // kullanırız
   switch (a) {
     case 5:
      break;
     case 7:
      break;
   }default:
    break;

    // Döngüler
    for (int i = 0; i < a; i++) {
      /* code */

      if (koşul) {
        continue;
      }
    }
    while (/*durma koşulu*/) {
      /* code */
    }
    do {
      /* code */
    } while(/* condition */);

    // shift operatörü kullanımı

    char a = 201; //11001001

    a>>1; // 11100100

    /*
      shift operatürü kullandığımız değişken
      işaretli sayı ise başına
       ne varsa onu ekler
      eğer sayı işaretli değilse başına 0 ekler

    */

    int a[5] = {0,1,2,3,4};

    int a[100] = {0}; //dizinin bütün elemanlarını sıfır yapar

    int a[1000]; // elemanlar bellekteki rastgele değerlerdir

    char c[10] = {'m','e','r','h','a','b','a'};

    char c[] = "merhaba";

    while (c[i]!='\0') {
      /* code */
    }


  return 0;

}
