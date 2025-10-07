#include <stdio.h>
int sum(int x,int y){
  return printf("x + y = %i\n",x + y);
}

int main(void){
  /*Cの式についての学習*/
  //一次式
  int hoge_list[10];
  int hoge = 10;
  int x = 5;
  printf("hoge + x = %i\n",(hoge + x) / 5);
  sum(10,5);
  printf("Hello!\n");
  printf("hoge_list..%p\n",hoge_list);
  printf("hoge_list..%p\n",(void*)&hoge_list[0]);
  return 0; 
}
