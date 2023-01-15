#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int n = 5; // 0101
	int position = 3;
	int bitmusk = 1<<position;

	int newValue = bitmusk|n;

	cout<<newValue<<endl;

	return 0;
}