#include <stdio.h>
#include <string.h>
char s[200];
void NhapChuoi(char s[]) {
	gets (s);
}
void xuly(char s[]) {
	int dem = 1;
	int n = strlen (s);
	if (n == 0) {
		dem = 0;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (s[i] == ' ' && s[i + 1] != ' ') {
				dem++;
			}
		}
	}
	printf("%d", dem);
}

int main () {
	int t;
	scanf ("%d", &t);
	for (int i = 1; i <= t; i++) {
		char s[200];
		NhapChuoi(s);
		xuly(s);
		return 0;
	}
}