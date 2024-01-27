#include <stdio.h>
#include <string.h>

int main (){
	char s[50];
	gets (s);
	strlwr(s);
	char a[10][50];
	char *token =strtok (s, " ");
	int n=0;
	while (token!=NULL){
		strcpy(a[n++], token);
		token = strtok (NULL, " ");
	}
	printf ("%s", a[n-1]);
	for (int i=0;i<n-1;i++){
		printf ("%c", a[i][0]); 																			
	}
	printf ("@ptit.edu.vn\n");
}