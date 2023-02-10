#include "bits/stdc++.h"
using namespace std;
unsigned long long n = 100000000;
vector<bool> isPrime(n+1, true);

void sieve(){
	isPrime[0] = isPrime[1] = false;
	for(unsigned long long i=2; i*i<=n; ++i){
		if(isPrime[i]){
			for(unsigned long long j=i*i; j<=n; j +=i){
				isPrime[j] = false;
			}
		}
	}
}


void NOD(unsigned long long x, int kase){
	
	unsigned long long total = 1;
	for(unsigned long long i=2; i<=x; i++){
		if(isPrime[i]){
			unsigned long long count = 0;
			if(x % i == 0){
				while(x % i == 0){
					x = (x/i);
					count++;
				}
				total = total * (count+1);
			}
		}
	}
	cout<<"Case "<<kase<<": "<<total-1<<"\n";
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	sieve();
	int t; cin>>t;
	int kase=1;
	while(t--){
		unsigned long long n;
		cin>>n;
		NOD(n, kase);
		kase++;

	}

	return 0;
}
