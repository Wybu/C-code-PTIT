#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	int k=1;
	for (int i=1;i<=n;i++){
		if (i%2!=0){
			for (int j=1;j<=i;j++){
				printf("%d ",k++ );
			}
		}
		else {
			for (int j=k+i;j>k;j--){
				printf("%d ", j-1);
			}
			k+=i;
		}
		printf("\n");
	}
}
