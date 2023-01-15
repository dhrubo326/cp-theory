#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>primeStorage;

void sieve(){
	//  Sieve of Eratosthenes with pre-computition
	ll N = 1e7+10;
	vector<ll> prime(N, 1);
	// 0 and 1 is not prime, so define it 0
	prime[0]=prime[1]=0;
	// sieve algoithom
	for(ll i = 2; i*i <=N; i++){
		if(prime[i] == 1){
			for(ll j = i*i; j <=N; j +=i){
				prime[j] = 0;
			}
		}
	}
	// Store only prime into another vector
	for(ll i=2; i<=N; i++){
		if(prime[i] == 1){
			primeStorage.push_back(i);
		}
	}
	// for(auto i: primeStorage){
	// 	cout <<i<<" ";
	// }
}
int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 
	

	// user input and primality test
	int T;
	cin>>T;
	sieve();
	while(T--){
		int x;
		cin>>x;
		cout<<primeStorage[x-1]<<endl;
	}

	return 0;
}