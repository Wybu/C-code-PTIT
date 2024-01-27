#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n) {
	if (n < 2)	return 0;
	if (n == 2) return 1;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) return 0;

	}
	return 1;
}

int main() {
	int t;
	scanf ("%d", &t);
	for (int c = 1; c <= t; c++) {

		int n;
		scanf("%d", &n);
		int i, a[100];
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int j, k;
		printf ("Test %d:\n", c);
		for (i = 0; i < n; i++) {
			// if (so_nguyen_to(a[i])) {
			int dem = 0;
			for (j = 0; j < n; j++) {
				if (a[i] == a[j]) {
					if (i != j) {
						for (k = j; k < n; k++) {
							a[k] = a[k + 1];
						}
						n--;
						j--;
					}
					dem++;
				}
			}

			if (dem != 0) {
				printf("%d xuat hien %d lan\n", a[i], dem);
			}
		}
	}


	return 0;
}