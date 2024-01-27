#include <stdio.h>
#include <string.h>
int main () {
	char s[100];
	int doixung = 1;
	int i;
	gets (s);
	int n = strlen (s);
	for (i = 0; i <= n / 2; i++) {
		if (s[i] != s[n - i - 1])	{doixung = 0; break;}

	}
	if (doixung)	printf("1\n");
	else printf("0\n");
	return 0;
}