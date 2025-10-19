#include <stdio.h>
 /*関数ポインタを構造体に格納して使う方法*/
 //関数ポインタの定義
 typedef double (*pt)(double,double); 
 //構造体の定義
 typedef struct {
   double x;
   double y;
   pt z; //関数ポインタを格納
 }test_struct;
//ポインタに代入する関数の作成
double func1(double x,double y){
   return x * y;
}
double func2(double x,double y){
   return x / y;
}

int main(){
   test_struct test;
   test.x = 30.5;
   test.y = 255.589;
   test.z = func1; //構造体に格納されたポインタに関数を格納
   double result = test.z(test.x,test.y);
   printf("result..%f\n",result);
   test.z = func2;//別の関数を格納
   double result2 = test.z(test.x,test.y);
   printf("result2..%f\n",result2);
   return 0;
}