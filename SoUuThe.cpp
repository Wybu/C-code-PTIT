#include <stdio.h>
#include <string.h>
int uuthe(char s[1000]) {
	int chan = 0, le = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		if ((int)s[i] % 2)	le++;
		else chan++;
	}
	if (n % 2 != 0 && le > chan) {
		return 1;
	}
	if (n % 2 == 0 && chan > le ) return 1;
	return 0;
}
int checker(char s[1000]) {
	int n = strlen(s);
	if (s[0] == '0') return 0 ;
	for (int i = 1; i < n; i++) {
		if (s[i] < '0' || s[i] > '9') {
			return 0;
			break;
		}
	}
	return 1;
}
int main () {
	int t;
	scanf ("%d", &t);
	fflush(stdin);
	while (t--) {
		char s[1000];
		gets (s);
		int n = strlen (s);
		if (uuthe(s) * checker(s)) printf("YES");
		if (checker(s) == 0) printf("INVALID");
		if (uuthe(s) == 0 && checker(s) == 1) printf("NO");
		printf ("\n");
	}
}