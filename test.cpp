#include <stdio.h>
#include <string.h>

int main () {
	char s[99];
	gets (s);
	int n = strlen (s);
	int i = 0, count = 0;
	while (i < n / 2) {
		if (s[i] != s[n - i]) break;
		else count ++;

		i++;
	}
	if (count == n / 2) printf ("1");
	else printf("0");
}