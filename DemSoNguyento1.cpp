#include <stdio.h>
#include <math.h>
int primeNum(int n){
	if (n<2)	return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0)	return 0;
	}
	return 1;
}
int chusonguyento(int n){
	while (n){
		int a=n%10;
		if (primeNum(a)==0)	{return 0;
			break;}
		n/=10;
	}
	return 1;
}
int main (){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int count=0;
		for (int i=a;i<=b;i++){
			if (primeNum(a)*chusonguyento(a))	count++;
		}
		printf("%d\n", count);
	}
}