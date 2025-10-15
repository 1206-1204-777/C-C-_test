#include <stdio.h>
int main(void){
   /*const修飾子*/
   const int x = 10; //値の変更が不可な変数"x"を宣言
   printf("x..%d\n",x); //xの値を出力
   //x = 20; 変更できないためコンパイルエラーになる(エラーメッセージ：式は変更可能な左辺値である必要があります)
   int y = x + 10; // xの値を使った新しい変数"y"を作成。constは"読み取り専用"なだけなので中身の値は使える
   printf("y..%d\n",y); //結果：y..20
   /*引数にconstを使用した関数*/
   char *test_src(char *dest,const char *src){ //char型へのポインタを返す関数test_srcを宣言
    src = NULL; //constで修飾したポインタ型変数"src"に値を再代入するが、問題なく実行・コンパイルされる
   //*src = 'a'; //この場合は"変数srcの指す先(値そのもの)を変えることになるためコンパイルエラーになる" エラーメッセージ：assignment of read-only location ‘*src’
   }
   //変数そのものを"読み出し専用"にする場合
   char *test_src2(char *dest, char * const src){
    //src = NULL; //変数そのものが読み出し専用なので、再代入ができずコンパイルエラーになる エラーメッセージ：assignment of read-only parameter ‘src’
    *src = 'a'; //新しい値をポインタ変数が指す先の変更は可能(再代入は不可)
   }
   //変数と変数に格納された値の両方をconstにしたい場合
   char *test_src3(const char * const src);

   /*typedef*/
   typedef char String; //typedefを使ってchar型にStringという別名をつける
   String X[6] = "hello"; //Stringの別名を使って配列Xに終端文字(\0)を含む文字列を格納
   printf("x..%s\n",X); //結果x..helloと出力される
   /*typedefを使用した構造体*/
   typedef struct {
    int x;
    int y;
   }Point; //Pointという名前の構造体を定義
   Point p1 = {10,20}; //Point型の変数p1を宣言し、xに10、yに20を代入
   printf("p1..x:%d y:%d\n",p1.x,p1.y); //結果：p1..x:10 y:20と出力される
   /*typedefを使用した関数ポインタ*/
   typedef int (*FuncPtr)(int,int); //戻り値がint型、引数が2つのint型の関数ポインタにFuncPtrという別名をつける
   int add(int a,int b){ //2つのint型引数を受け取り、その和を返す関数addを定義
    return a + b; //引数aとbの和を返す
   }
   FuncPtr fptr = add; //関数ポインタfptrに関数addのアドレスを代入
   int result = fptr(5,3); //fptrを使って関数addを呼び出し、結果をresultに格納
   printf("result..%d\n",result); //結果：result..8と出力される
    return 0; 
}