#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int n = 13; // 1101
	int update1 = 1; // set operation
	int update2 = 0; // clear operation
	int position = 2;
	int bitmusk = 1<<position;
	// set operation
	int setOperation = bitmusk | n;
	cout <<"In positon-i(2) bit updated to 1: "<<setOperation<<endl;

	// clear operation
	int notBitmusk = ~(bitmusk);
	int newValue = notBitmusk & n;
	cout<<"In positon-i(2) bitupdated to 0: "<<newValue<<endl;

	return 0;
}