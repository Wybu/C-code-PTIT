#include <stdio.h>
#ifndef MAX
#define MAX 10
#endif

void Nhap_Mang(int m, int n, int c[10][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf ("%d", &c[i][j]);
        }
    }
}

/*ham doi hang 2 qua hang 3*/
void doihang2quahang3(int a[MAX][MAX], int n, int h2, int h3)
{
    int j, tg;
    for (j = 0; j < n; j++)
    {
        tg = a[h2][j];
        a[h2][j] = a[h3][j];
        a[h3][j] = tg;
    }
}
void Xuat_Mang(int m, int n, int c[10][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf ("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main () {
    int arr[MAX][MAX];
    int n, m;
    scanf ("%d%d", &m, &n);
    Nhap_Mang(m, n, arr);
    int row1, row2;
    scanf ("%d%d", &row1, &row2);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == row1  || i == row2 ) {
                doihang2quahang3(arr, n, row1, row2);
            }
        }
    }
    Xuat_Mang(m, n, arr);
    return 0;
}