#include <stdio.h>
#include <math.h>

void KT_Nguyen_To (int a){
	
	for (int i=1; i<=sqrt(a);i++){
		if (a%i==0){
			printf("%d\n", i);
		}
	}
}
int main (){
	int a;
	scanf ("%d", &a);
	KT_Nguyen_To;
	return 0;
}