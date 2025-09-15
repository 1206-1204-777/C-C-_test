#include <stdio.h>
/*順列の出力*/
#define N_MAX (100)//選択できる数の最大値（nの最大値）
int used_flag[N_MAX + 1];//数字が使用されたらその数字に1のフラグを立てる
int result[N_MAX];
int n;
int r;

/*出力用関数*/
void print_result(void){
    for(int i = 0; i < r; i++){
        printf("%d",result[i]);
    }
    printf("\n");
}
void permutation(int nth){
    int i;
    if(r == nth){
        print_result();
        return;
    }
    for (i = 1; i < n; i++)
    {
        if(used_flag[i] == 0){
            result[nth] = i;
            used_flag[i] = 1;
            permutation(nth + 1);
            used_flag[i] = 0;

        }
    }
    
}
int main(void) {
    printf("順列を生成します。\n");
    printf("nの値を入力してください\n");
    if(scanf("%d",&n) != 1){
        fprintf(stderr,"無効な数値です\n");
        return 1; //異常終了フラグ
    }
    printf("rの値を入力してください\n");
    if (scanf("%d",&r) != 1){
        fprintf(stderr,("無効な数値です\n"));
        return 1;
    }
    //入力値の妥当性チェック
    if (n <= 0 || r <= 0 || n > N_MAX || r > n)
    {
        fprintf(stderr,"入力値が正しくありません\n");
        return 0;
    }
    //flagの初期化
    for(int i = 0;i <= n; i++){
        used_flag[i] = 0;
    }
    
    permutation(0);
    return 0;
}
