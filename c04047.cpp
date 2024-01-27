#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int b[n/2];
	int count=0, dem=0, k=0;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]==a[j]){
				a[i]=b[k];
				k++;
				continue;
			}
		}
	}
	for (int i=0;i<k+1;i++){
		printf("%d ", a[i]);
	}
}