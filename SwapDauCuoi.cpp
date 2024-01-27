#include <stdio.h>
int main () {
	int n;
	// int so_dau, so_cuoi;
	scanf ("%d", &n);
	int tmp = n;
	int so_cuoi = n % 10;
	int so_dau;
	for (int i = 1;; i++) {

		if (n / 10 == 0) {
			int so_dau = n;
			printf("%d\n", so_dau);
			break;
		}
		
		n /= 10;
	}
	printf("%d\n", so_dau);
	printf("%d\n", so_cuoi);
	// printf ("%d\n%d\n", so_dau, so_cuoi );
	return 0;
}