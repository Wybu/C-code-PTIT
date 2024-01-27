#include <stdio.h>
#include <math.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		int b[10000];
		int count = 1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int min = abs(a[0] - a[1]);
		b[0] = min;
		int soluong = 0;
		for ( int h = 0; h < n - 1; h++ ) {
			for (int k = h + 1; k < n; k++) {
				if (abs(a[h] - a[k]) <= min) {
					min = abs(a[h] - a[k]);
					b[count] = min;
					count++;
				}
			}
		}
		for (int l = 0; l < count; l++) {
			if (b[l] == min) {
				soluong++;
			}
		}
		printf("%d %d\n", min, soluong);
	}

}