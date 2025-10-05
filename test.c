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

  printf("hoge[2]..%i\n",(*hoge)[2]);
  /*配列の計算 */
  printf("size.. %d\n",(int)sizeof(int(*[5])(double)));

  /*基本型のバイト数*/
  printf("char..%d\n",(int)sizeof(char));
  printf("int..%d\n",(int)sizeof(int));
  printf("float..%d\n",(int)sizeof(float));
  printf("double..%d\n",(int)sizeof(double));

    //ポインタのテスト
  int* p1 = NULL;//int型へのポインタ変数
  int i;
  i= 10;
  //iのアドレスをpに代入
  p1 = &i;

  //pの値
  printf("p = %p\n",p1);
  //iの値
  printf("&i = %p\n",&i);
  return 0; 
}
