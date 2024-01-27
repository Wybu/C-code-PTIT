#include<stdio.h>
 
int main() {
    int i = 0;
    int j = 0;
    // khai bao mang 2 chieu bang mang nac danh
    int ma_tran[4][3] = {{ 1, 2, 3 }, {2, 3, 4}, {3, 4, 5}, {4, 5, 6}};
    //duyet mang
    for (i = 0; i < 4; i++) {
     for (j = 0; j < 3; j++) {
            printf("%d ", ma_tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}