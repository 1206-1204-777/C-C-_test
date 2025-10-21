#include <stdio.h>
/*配列とポインタのよくある使い方*/
// 値を受取り値を格納する関数を定義
void func(int *a,double *b){ //引数にポインタを指定
   //渡す値。戻り値ではなく引数を使う
   *a = 5;
   *b = 10.5;
   
}
int main(void){
   //戻り値以外の方法で値を返す
   int a;
   double b;
   func(&a,&b); //空の変数を引数に渡す
   printf("a..%d b..%f\n",a,b);
    return 0; 
}