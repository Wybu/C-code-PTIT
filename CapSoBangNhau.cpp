#include <stdio.h>
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a[31];
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		int count = 0;
		for (int i = 0 ; i < n; i++) {
			if (a[i] == a[i + 1]) {
				count ++;
			}
		}
		printf("%d\n", count );
	}

	return 0;
}