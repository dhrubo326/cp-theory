#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int base = 2374859;
	int power = 3029382;
	int res = 1;
	int mod = 36123;
	while(power){
		if(power%2 == 1){
			// res = (res*base)%mod;
			res = ((res%mod)*(base%mod))%mod;
			power--;
		}else{
			// base = base*base;
			base = (((base)%mod)*((base)%mod))%mod;
			power = power/2;
		}
	}
	cout<<res;

	return 0;
}