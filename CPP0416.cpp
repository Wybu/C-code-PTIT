#include <bits/stdc++.h>
using namespace std;

using ll = long long ;

int main () {
	int t; cin >> t;
	while (t--) {
		/* code */
		int count = 0;
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		sort (a, a + n);
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] + a[j] == k) count ++;
			}
		}
		cout << count <<endl;
	}
}