#include <bits/stdc++.h>
using namespace std;
bool prime (long long n) {
	if (n < 2)	return false;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)	return false;
	}
	return true;
}
bool check (long long n) {
	if (prime (sqrt(n)))	return true ;
	return false;
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		int dem = 0;
		for (long long i = 0; i <= n; i++) {
			if (check (i)) dem ++;
		}
		cout << dem << endl;
	}
}