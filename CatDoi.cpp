#include <stdio.h>
int check;

int main (){
	int t;
	scanf("%d", &t);
	while (t--)
	{
		/* code */
	
	
	long long n;
	scanf ("%lld", &n);
	int dem=0;
	int check=1;
	while (n>0){
		int so_cuoi=n%10;
		if (so_cuoi==0)	printf ("0");
		if (so_cuoi==8)	printf ("0");
		if (so_cuoi==9)	printf ("0");
		if (so_cuoi==1)	printf ("1");
		else{
			check=0;
			break;
		}
		n/=10;
	}
	if (check==0)	printf("INVALID");

}
}