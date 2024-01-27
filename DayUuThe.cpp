#include <stdio.h>
#include <string.h>
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int odd = 0, even = 0, count = 0;
		char kt = ' ';
		while (kt == ' ') {
			int n;
			scanf ("%d ", &n);
			count++;
			if (n % 2 == 0) even++;
			else odd++;
			kt = getchar();
		}		
		if ((count % 2 == 0 && even > odd) )
			printf("YES\n");
		if ((count % 2 != 0 && odd > even))
			printf("YES\n");
		else
			printf ("NO\n");
	}
}