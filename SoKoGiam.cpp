#include <stdio.h>
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		long long n, n2;

		scanf("%lld", &n);
		n2=n*100;
		while (n2) {
			if (n2 == 0) {
				printf("YES\n");
				break;
			}
			int so_cuoi = n2 % 10;
			int so_dung_truoc = n2 % 100;
			if (so_cuoi < so_dung_truoc) {
				printf("NO\n");
				break;
			}
			n2 /= 10;

		}
	}
	return 0;
}