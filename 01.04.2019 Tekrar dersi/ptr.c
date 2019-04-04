#include <stdio.h>
int main(int argc, char const *argv[]) {
  /*int * ptr;
  printf("%p\n",ptr);
  printf("%d\n",ptr+1);
  (int *)malloc(3*sizeof(int));
*/
/*  int a[5] = {0,1,2,3,4};
  int * p = &a[0];
int i = 0;
while (i<5) {
  printf("%d\n", p+i);
  i++;

}
*/

/*int x = 2;
do{
  printf("%d\n", x );
  x++;

} while(x>5);*/
/* int i = 2;
switch (i) {
  case 5: printf("%d \n", i);
  break;
  case 4: printf("%d\n bu gün pazartesi", i );
  break;
  case 3: break;
  case 2: printf("%d\n sınavlar 8 nisanda başlıyor", i );
  break;
}*/

int array1[3]= {1,2,3};
printf("%p\n", &array1[0] );
  return 0;
//  free(*array1[3]);
}
