#include "bits/stdc++.h"
using namespace std;
long long int n = 1000010; 
vector<bool> is_prime(n+1, true);

 
void sieve(){
	// vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
	    if (is_prime[i]) {
	        for (int j = i * i; j <= n; j += i)
	            is_prime[j] = false;
	    }
	}
}

void NOD(long long int n, int kase){
	int total = 1;
	for (int k = 2; k <= n; k++) {
        if (is_prime[k]) {
  
            // calculate number of divisor
            // NOD = (k1+1) * (k2+1) *.....* (kn+1)
            // k == power of prime factors
            int count = 0;
            if (n % k == 0) {
                while (n % k == 0) {
                    n = n / k;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    cout<<"Number of division "<< total<<endl;

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
