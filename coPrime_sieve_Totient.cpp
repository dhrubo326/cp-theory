#include "bits/stdc++.h"
using namespace std;
#define M 1e6+2
vector<long long> totient(M);
vector<long long> totient2(M);

void calculatePhi(){
    for(int i=2; i<=M; i++)
        totient[i] = i;
    for(int i =2; i<=M; i++)
        if(totient[i]==i)
            for(int j=i; j<=M; j+=i)
                totient[j]-=totient[j]/i;
}

void calculatePhi2(){
    for(int i=2; i<=M; i++){
        totient2[i] = i;
    }
    for(int i =2; i<=M; i++){
        if(totient2[i]==i){
            for(int j=2*i; j<=M; j +=i){
                totient2[j] *= i-1;
                totient2[j] /= i;
            }
            totient2[i] = i-1;
        }
    }
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	calculatePhi();
	calculatePhi2();
	for(int i = 2; i<10; i++){
		cout<< totient[i]<<" ";
	}
	cout<<endl;
	for(int i = 2; i<10; i++){
		cout<< totient2[i]<<" ";
	}

	return 0;
}
