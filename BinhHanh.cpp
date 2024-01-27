#include<stdio.h>
int max (int m, int n){
	if (m>n)	return m;
	return n;
}
int main() {
	int n=4, m=3;
	printf ("%d", max(m, n));
}