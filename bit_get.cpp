#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int n = 5; // 0101
	int position = 2;
	int bitmusk = 1 << position;

	if(bitmusk & n){
		cout<<"1 present in this position\n";
	}else{
		cout<<"0 present in this position\n";
	}

	return 0;
}