#include "bits/stdc++.h"
using namespace std;
long long maxN = 1e3; 
vector<long long> listPrimeFactor(maxN, 0);
vector<long long> spf(maxN, 0);
// pre-computing listPrimeFactors using Sieve
void findLeastPrime(){
	for(long long i = 1; i< maxN; ++i){
		if(i%2 == 0){
			listPrimeFactor[i] = 2;
		}else{
			listPrimeFactor[i] = i;
		}
	}

	for(long long i = 3; i*i < maxN; i++){
		if(listPrimeFactor[i] == i){
			for(long long j = i*i; j< maxN; j +=i){
				if(listPrimeFactor[j] == j){
					listPrimeFactor[j] = i;
				}
			}
		}
	}

}

vector<int> getAllfactors(int n){
	vector<int>allPrimeFactor;
	while(n > 1){
		allPrimeFactor.push_back(listPrimeFactor[n]);
		n /= listPrimeFactor[n];
	}
	cout<<"Prime factors: \n";
	for(auto i: allPrimeFactor){
		cout <<i<<" ";
	}
	cout<<"\n";
	return allPrimeFactor;
}

void SOD(int x){
	map<int, int>countDivisor;
	vector<int>factors = getAllfactors(x);
	for(int i=0; i<factors.size(); i++){
		countDivisor[factors[i]]++;
	}
	int sum = 1;
	for(auto i: countDivisor){
		int addition = 1;
		for(int j =1; j<=i.second; j++){
			addition += i.first*j;
		}
		sum *= addition;
	}
	
	cout<<"sum of divisor: "<< sum;

}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	findLeastPrime();
	int x = 12;
	SOD(x);

	return 0;
}
