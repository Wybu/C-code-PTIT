#include<stdio.h>

void swap(int a, int b, int temp) {
	a = temp;
	b = a;
	temp = b;
}

int main() {
	int n;
	scanf ("%d", &n);
	int a[100];
	int count = 0;
	for (int i = 0; n > 0; i++) {
		a[i] = n % 10;
		count++;
		n /= 10;
	}
	// printf("%d\n", count);
	int temp;
	a[1] = temp;
	a[count] = a[1];
	temp = a[count];
	for (int i = count; i >= 1; i--) {

		printf("%d", a[i]);
	}
}