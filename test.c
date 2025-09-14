#include <stdio.h>
void fanc1(int a, int b){
    int c,d;
    //引数のポインタ
    printf("func1:&a..%p func1:&b..%p\n",(void*)&a,(void*)&b);
    //関数内のローカル変数のポインタ
    printf("func1:&c..%p fuc1:&d..%p\n",(void*)&c,(void*)&d);
}
int main(void){
    /*2章5項の学習を開始*/
    //動的変数
   int auto test = 5; //動的変数を定義
   int static Test = 5;
   printf("%p\n",(void*)&test);
   printf("%p\n",(void*)&Test);
   /*関数を使用した動的変数*/
   int a,b;
   //maain関数内のローカル変数
   printf("main:&a..%p main:&b..%p\n",(void*)&a,(void*)&b);
   fanc1(1,2);
    return 0;
}