#include <stdio.h>
int hoge;
int main(void){
    /*2章の学習を開始*/
    printf("仮想アドレスについて\n");
    char buf[256];

    printf("&hoge.. %p\n",(void*)&hoge);
    //入力の規則
    fgets(buf,sizeof(buf),stdin);
    sscanf(buf,"%d",&hoge);

    for (;;)
    {
        printf("hoge.. %d\n",hoge); //hogeのアドレス

        //enterを押すたび入力された整数の数と同じ値を増やす
        getchar();
        hoge++;
    }
    
    return 0;
}