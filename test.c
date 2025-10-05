#include <stdio.h>
int main(void){
  /*Cのデータ型についての学習*/
  int x = 10;
  int *p = &x;
  printf("p:%zu\n",sizeof(p));
  printf("int:%zu\n",sizeof(x));
  printf("x..%i\n",x);
  printf("*p..%p\n",&p);

  int xx = x + 1;
  int *pp = &xx;
  printf("xx..%i\n",xx);
  printf("*pp..%p\n",&pp);

  /*配列について*/
  int hoge[2][3];
  printf("hoge[2]..%i\n",(*hoge)[3]);
  printf("hoge[2]..%i\n",(*hoge)[2]);
  /*配列の計算 */
  printf("size.. %d\n",(int)sizeof(int(*[5])(double)));

  
  return 0; 
}
