#include <stdio.h>
int main (){
		int n;
		scanf ("%d", n);
		while (n--){
				long long a;
				int count=0;
				scanf ("%d", &a);
				for (int i=1;;i++){
					int so_cuoi=a%10
					int so_tiep_theo=a/10;
					int so_dung_truoc= so_tiep_theo%10;
					if (so_dung_truoc<=so_tiep_theo){
						continue;
					}
					else {
						count ++;
						break;
					}
					
					a/=10;
				}
				if(count ==0)	printf("YES");
				else printf ("NO");
		}
		return 0;
	}
