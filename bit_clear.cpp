#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int n = 13; // 1101
	int position = 2;
	int bitmusk = 1<<position;
	int notBitmusk = ~(bitmusk);

	int newValue = notBitmusk & n;

	cout<<newValue<<endl;

	return 0;
}