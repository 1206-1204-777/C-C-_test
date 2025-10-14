#include <stdio.h>
int main(void){
   /*const修飾子*/
   const int x = 10; //値の変更が不可な変数"x"を宣言
   printf("x..%d\n",x); //xの値を出力
   x = 20; /*変更できないためコンパイルエラーになる(エラーメッセージ：式は変更可能な左辺値である必要があります)*/
   int y = x + 10; 
   printf("y..%d\n",y); 
    return 0; 
}