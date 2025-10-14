#include <stdio.h>
int main(void){
   /*const修飾子*/
   const int x = 10; //値の変更が不可な変数"x"を宣言
   printf("x..%d\n",x); //xの値を出力
   //x = 20; 変更できないためコンパイルエラーになる(エラーメッセージ：式は変更可能な左辺値である必要があります)
   int y = x + 10; // xの値を使った新しい変数"y"を作成。constは"読み取り専用"なだけなので中身の値は使える
   printf("y..%d\n",y); //結果：y..20
   /*constを使用したポインタ変数*/
   char *test_src(char *dest,const char *src){ //char型へのポインタを返す関数testを宣言
    src = NULL; //constで修飾したポインタ型変数"*src"に値を再代入するが、問題なく実行・コンパイルされる
   
   }
    return 0; 
}