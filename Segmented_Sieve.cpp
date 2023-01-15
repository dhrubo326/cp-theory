#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll limit = 42949672;
vector<ll> primes;

void sieve()
{
	// int limit = sqrt(n)+1;
	// ll limit = 4294967296;
	// isPrime.reserve(limit);
	vector<ll> isPrime(limit, 1);

	// I loop from 3 to reduce looping time 
	for(int i =3; i*i <=limit; i +=2)
	{
		if(isPrime[i] == 1){
			for(int j= i*i; j<=limit; j+= i){
				isPrime[j] = 0;
			}
		}
	}
	primes.push_back(2);
	for(int i=3; i< limit; i += 2){
		if(isPrime[i]==1) primes.push_back(i);
	}
	// for(int i=0; i<10; i++)cout<<primes[i]<<endl;
}

void segSieve(ll left, ll right){
	vector<int> segPrime(right-left+1, 1);

	for(int i = 0; primes[i]*primes[i] <= right; ++i){
		int CP = primes[i]; // current prime
		int base = ((left+CP-1)/CP) * CP;
		for(ll j = base; j<= right; j += CP){
			segPrime[j - left] = 0;
		}
		if(base == CP) segPrime[base-left] = 1;
	}

	for(int i = 0; i< right-left+1; i++){
		if(segPrime[i]){
			cout<<left+i<<endl;
		}
	}
}


int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	sieve();
	ll L = 1e7;
	ll R = 1e7+100;
	segSieve(L,R);


	return 0;
}