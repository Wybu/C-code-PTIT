#include <stdio.h>
void Nhap_Mang(int n, int a[101]) {
	for (int i = 0; i < n; i++) {
		scanf ("%d", &a[i]);
	}
}
int main () {
	int n, a[101];
	scanf("%d", &n);
	if (n <= 2 || n >= 100)	return 0;
	Nhap_Mang(n, a);
	int check = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] == a[i + 1])
			check++;
	}
	if (check != 0)	return 0;
	int NhoNhat;
	int NhoNhi;
	NhoNhi = NhoNhat = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] < NhoNhat) {
			NhoNhi = NhoNhat;
			NhoNhat = a[i];

		}
		else if (a[i] > NhoNhat && a[i] < NhoNhi)	NhoNhi = a[i];

	}
	printf("%d %d\n", NhoNhat, NhoNhi);
	return 0;
}