#include <stdio.h>
void Nhap_Mang(int n, int a[50]) {
	for (int i = 0; i < n; i++) {
		scanf ("%d", &a[i]);
	}
}
void Xuat_Mang(int n, int a[50]) {
	int dem = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] >= a[i - 1]) {
			dem++;
		}
	}
	printf("%d\n", dem);
}

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n, a[50];
		do {
			scanf ("%d", &n);
		} while (n < 2 || n > 50);
		Nhap_Mang(n, a);
		Xuat_Mang(n, a);

	}
	return 0;
}