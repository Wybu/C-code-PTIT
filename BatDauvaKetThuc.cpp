#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int cuoi=n%10;
	int dau;
	while (n){
		dau=n%10;
		n/=10;
	}
	printf("%d\n%d", dau, cuoi);
}