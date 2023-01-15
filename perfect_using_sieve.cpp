#include "bits/stdc++.h"
using namespace std;
unsigned long long maxN = 1e7-1; 
vector<unsigned long long> listPrimeFactor(maxN, 0);
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

vector<unsigned long long> getAllfactors(unsigned long long n){
	vector<unsigned long long>allPrimeFactor;
	while(n > 1){
		allPrimeFactor.push_back(listPrimeFactor[n]);
		n /= listPrimeFactor[n];
	}
	// cout<<"Prime factors: \n";
	// for(auto i: allPrimeFactor){
	// 	cout <<i<<" ";
	// }
	// cout<<"\n";
	return allPrimeFactor;
}

void SOD(unsigned long long x){
	map<unsigned long long, unsigned long long>countDivisor;
	vector<unsigned long long>factors = getAllfactors(x);
	for(unsigned long long i=0; i<factors.size(); i++){
		countDivisor[factors[i]]++;
	}
	// int it = countDivisor.begin();
	// int addition = 0;
	unsigned long long sum = 1;
	for(auto i: countDivisor){
		unsigned long long addition = 1;
		for(unsigned long long j =1; j<=i.second; j++){
			addition += i.first*j;
		}
		sum *= addition;
	}
	// cout<<"But sum of divisor: "<< sum<<"\n";
	if ((sum-x) == x) {
	    cout << "YES, " << x << " is a perfect number!" << endl;
	} else {
	    cout << "NO, " << x << " is not a perfect number!" << endl;
	}

}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	findLeastPrime();
	int T;
	cin>>T;
	while(T--){
		unsigned long long x;
		cin>>x;
		SOD(x);
	}
	return 0;
}
