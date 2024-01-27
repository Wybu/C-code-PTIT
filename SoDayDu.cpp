#include <stdio.h>
#include <string.h>
int main () {
	int t;
	scanf ("%d", &t);
	fflush(stdin);
	while (t--) {
		char s[1001];
		fgets(s, sizeof(s), stdin);
		int check = 0;
		int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c0 = 0;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] < 48 || s[i] > 57) {
				printf("INVALID");
				check = 1;
				break;
			}
			switch (s[i]) {
			case '0':
				c0++;
				break;
			case '1':
				c1++;
				break;
			case '2':
				c2++;
				break;
			case '3':
				c3++;
				break;
			case '4':
				c4++;
				break;
			case '5':
				c5++;
				break;
			case '6':
				c6++;
				break;
			case '7':
				c7++;
				break;
			case '8':
				c8++;
				break;
			case '9':
				c9++;
				break;
			}
		}
		if (check == 1) {printf("\n"); continue;}
		if (c0 == 0 || c1 == 0 || c2 == 0 || c3 == 0 || c4 == 0 || c5 == 0 || c6 == 0 || c7 == 0 || c8 == 0 || c9 == 0) {
			printf("NO");
		}
		else printf("YES");
		printf("\n");
	}
	return 0;
}