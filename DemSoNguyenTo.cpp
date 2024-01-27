#include <stdio.h>
#include <math.h>

int so_nguyen_to(int i) {
	if (i < 2)	return 0;
	int j;
	for (j = 2; j <= sqrt(n); j++) {
		if (n % j == 0)	return 0;
	}
	return 1;
}
int check_so_cuoi(int i){
	int tong=0;
	while (i>0){
		int cuoi=i%10;
		if ()
		i/=10;
	}
}
int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
		int a, b;
		scanf ("%d %d", &a, &b);
		int count =0;
		for (int i=a; i<= sqrt(b);i++){
			if (so_nguyen_to(i))
		}
	}
	return 0;
}