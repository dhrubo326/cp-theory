#include "bits/stdc++.h"
using namespace std;

void PrimeFactors(long long n){
	vector<long long> allPF;
	while (n % 2 == 0)
    {
      // 2 is list prime factor for even
       allPF.push_back(2);
        n = n/2;
    }
	for (int i = 3; i*i <= n; i = i + 2)
    {
        // While i divides n, store i and divide n by i
        while (n % i == 0)
        {
            allPF.push_back(i);
            n = n/i;
        }
    }
    // This condition is to handle the case when n
    // is a prime number and greater than 2
    if (n > 2){
    	allPF.push_back(n);
    }
    cout<<"Prime factors: ";
    for(auto x: allPF){
    	cout<<x<<" ";
    }
    cout<<endl;
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
		long long n;
		cin>>n;
		PrimeFactors(n);
		kase++;

	}

	return 0;
}
