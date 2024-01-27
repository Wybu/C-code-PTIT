#include <stdio.h>
void Nhap_Mang(int n, int a[50]) {
	for (int i = 0; i < n; i++) {
		scanf ("%d", &a[i]);
	}
}
int main () {
	int n, a[50];
	scanf ("%d", &n);
	Nhap_Mang(n, a);
	int min1, min2;
	min1=min2=a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] < min1) {
			min2 = min1;
			min1 = a[i];
		}
		int check=\;
		for(int i=1;i<n;i++){
			if
		}
		if (a[i]>min1 &&a[i]<min2)	min2=a[i];

	// 	if (a[i]>min1){
	// 		if (min1==min2){
	// 			continue;
	// 		}
	// 	if (a[i] < min2) {
	// 		min2 = a[i];
	// 	}
	// }
	}

		printf ("%d %d", min1, min2);
	

	return  0 ;
}