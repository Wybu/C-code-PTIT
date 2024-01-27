#include <stdio.h>
#include <string.h>
void DemTu(char s[200] ){
		gets (s);
		char *token = strtok(s, " ");
		int dem = 0;
		while (token != NULL) {
			dem++;
			token = strtok(NULL, " ");
		}
		printf("%d\n", dem);
	}

int main() {
	int x;
	scanf ("%d", &x);
	fflush(stdin); //xoa bo nho dem
	while (x--) {
	char s[200];
	DemTu(s);
	}	
	return 0;
}
