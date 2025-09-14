#include <stdio.h>
void hello(vid){
    fprintf(stderr,"hello!");
}
void fanc(void){
    void *buf[10];
    static int i;

for(i = 0; i <100; i++)
{
    buf[i] = hello;
}

}

int main(void){
    /*2章5項の学習を開始*/
    //オーバーフロー
    int buf[1000];
    buf[999] = 10;
    fanc();
    return 0;
}
