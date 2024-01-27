#include <bits/stdc++.h>
using namespace std;
bool word(string s) {
	for (char x : s) {
		if (x == ' ' || x == '\n' || x == '\t') return true;
	}
	return false;
}
int main () {
	int t; cin >> t;
	cin.ignore(1);
	while (t--) {
		string s;
		int count = 0;
		getline (cin, s);
		for (char x : s) {
			if (x == ' ' || x == '\n' || x == '\t') count++;
		}
		cout << count + 1 << endl;
	}

}