#include "bits/stdc++.h"
using namespace std;

void findDivisor(long long n, long long l, int kase){
	// store divisors in a set.
	set<long long> allDvisor;

	for(long long i = 1; i*i <=n; i++){
		if(n%i == 0){
			allDvisor.insert(i);
			allDvisor.insert(n/i);
		}
	}
	cout<<"Case "<<kase<<": ";
	for(auto x : allDvisor){
		if(x>l)cout<<x<<" ";
	}
	cout<<"\n";
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	int t; cin>>t;
	int kase=1;
	while(t--){
		long long p, l;
		cin>>p>>l;
		long long n = p-l;
		if(l>=n){
			cout<<"Case "<<kase<<": "<<"impossible\n";
		}else{
			findDivisor(n, l, kase);
		}
		kase++;

	}

	return 0;
}
