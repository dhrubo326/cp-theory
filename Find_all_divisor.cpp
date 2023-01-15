#include "bits/stdc++.h"
using namespace std;

void findDivisor(long long n){
	// store divisors in a set.
	set<long long> allDvisor;

	for(long long i = 1; i*i <=n; i++){
		if(n%i == 0){
			allDvisor.insert(i);
			allDvisor.insert(n/i);
		}
	}
	for(auto x : allDvisor){
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<"Total number of divisor: "<<allDvisor.size();
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	long long n = 18;
	findDivisor(n);

	return 0;
}
