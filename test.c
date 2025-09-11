#include <stdio.h>
#include<stdlib.h>
int hoge;
int hoge2;
static int hoge3;

void func1(void){
    //静的なアドレスと動的なアドレスを表示
    int func1_variable;
    static int local_static_variable;

    printf("func1_variable.. %p\n",(void*)&func1_variable);
    printf("local_static_variable.. %p\n",(void*)&local_static_variable);
}
void func2(void){
    int func2_variable;
    printf("func2_variable.. %p\n",(void*)&func2_variable);
}
int main(void){
    /*2章の学習を開始*/
    printf("仮想アドレスについて\n");
    char buf[256];

    printf("&hoge.. %p\n",(void*)&hoge);
    //入力の規則
    fgets(buf,sizeof(buf),stdin);
    sscanf(buf,"%d",&hoge);

    // for (;;)
    // {
    //     printf("hoge.. %d\n",hoge); //hogeのアドレス

    //     //enterを押すたび入力された整数の数と同じ値を増やす
    //     getchar();
    //     hoge++;
    // }
    printf("アドレスの表示\n");
    int *p;
    /*関数へのポインタを表示*/
    printf("func1..%p\n",(void*)func1);
    printf("func2..%p\n",(void*)func2);
    /*文字リテラルへのポインタを表示*/
    printf("String..%p\n",(void*)"abc");
    /*グローバル変数のポインタを表示*/
    printf("hoge2..%p\n",(int*)&hoge2);
    /*static変数のポインタを表示*/
    printf("hoge3..%p\n",(int*)&hoge3);
    /*ローカル関数の表示 */
    func1();
    func2();

    /*Mallocで解放した領域のアドレス */
    p = malloc(sizeof(int));
    printf("malloc address..%p\n",(int*)p);
    return 0;
}