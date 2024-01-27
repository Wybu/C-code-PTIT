#include <stdio.h>
void Nhap_Mang(long long n, long long a[101]) {
	for (long long i = 0; i < n; i++) {
		scanf ("%lld", &a[i]);
	}
}

int main () {
	long long n;
	scanf ("%lld", &n);
	if (n < 2 || n > 100)	return 0;
	long long a[101];
	long long count = 0;
	Nhap_Mang(n, a);
	for (long long i = 0; i < n; i++) {
		for (long long j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				count ++;
			}
		}
	}
	printf ("%lld\n", count);
	for (long long i = 0; i < n; i++) {
		for (long long j = i + 1; j < n; j++) {
			if (a[i] == a[j] ) {
				printf("%lld " , a[i]);
			}
		}
	}
}