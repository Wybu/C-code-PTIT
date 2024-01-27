#include <stdio.h>
void Nhap_Mang(int n, int a[101]) {
	for (int i = 0; i < n; i++) {
		scanf ("%d", &a[i]);
	}
}
int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n, a[100];
		scanf("%d", &n);
		Nhap_Mang(n, a);
		for (int i=0;i<n;i++){
			int count=0, max;
			for (int j=0;j<n;j++){
				if (a[j]==a[i]){
					count++;
					max=count;
				}
			}
			if count 
		}
	}
}