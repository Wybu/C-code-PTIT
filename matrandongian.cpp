#include <stdio.h>
int main () {
	int n;
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == 1 || i == n || j <= i)	printf ("0 ");
			else {
				for (int k = 1; k <= n - i; k++) {
					printf("%d " , k);
				}
				break;
			}
		}
		printf("\n");
	}
}