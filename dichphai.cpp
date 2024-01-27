#include<stdio.h>
int soHoanHao(int n) {
	int temp = 1;
	for (int i = 2; i * i <= n; i++)
	{	if (n % i == 0) {
			if (i == n / i)temp += i;
			else temp += i + n / i;
		}
	}
	if (temp == n) return 1;
	return 0;
}
int main() {
	int n; scanf("%d", &n);
	for (int k = 2; k < n; k++) {
		if (soHoanHao(k))
			printf("%d ", k);
	}
}