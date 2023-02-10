#include "bits/stdc++.h"
using namespace std;
unsigned long long maxN = 1e8; 
vector<unsigned long long> listPrimeFactor(maxN, 0);
vector<unsigned long long> spf(maxN, 0);
// pre-computing listPrimeFactors using Sieve
void findLeastPrime(){
	for(unsigned long long i = 1; i< maxN; ++i){
		if(i%2 == 0){
			listPrimeFactor[i] = 2;
		}else{
			listPrimeFactor[i] = i;
		}
	}

	for(unsigned long long i = 3; i*i < maxN; i++){
		if(listPrimeFactor[i] == i){
			for(unsigned long long j = i*i; j< maxN; j +=i){
				if(listPrimeFactor[j] == j){
					listPrimeFactor[j] = i;
				}
			}
		}
	}

}

vector<unsigned long long > getAllfactors(unsigned long long  n){
	vector<unsigned long long >allPrimeFactor;
	while(n > 1){
		allPrimeFactor.push_back(listPrimeFactor[n]);
		n /= listPrimeFactor[n];
	}
	return allPrimeFactor;
}

void NOD(unsigned long long  x, int kase){
	map<int, int>countDivisor;
	vector<unsigned long long >factors = getAllfactors(x);
	for(unsigned long long  i=0; i<factors.size(); i++){
		countDivisor[factors[i]]++;
	}
	int result = 1;
	for(auto i: countDivisor){
		result *= i.second + 1;
	}
	cout<<"Case "<<kase<<": "<<result-1<<"\n";

}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	findLeastPrime();
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
