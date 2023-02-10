#include "bits/stdc++.h"
using namespace std;
#define maxN 5e6+2
vector<long long> totient2(maxN);
vector<unsigned long long> sumTotient(maxN);

// void fuckPhi(){
//     for(int i=2; i<=maxN; i++){
//         totient2[i] = i;
//     }
//     for(int i =2; i<=maxN; i++){
//         if(totient2[i]==i){
//             for(int j=2*i; j<=maxN; j +=i){
//                 totient2[j] *= i-1;
//                 totient2[j] /= i;
//             }
//             totient2[i] = i-1;
//         }
//     }

//     // square sum of Phi using cumulative sum
//     sumTotient[0]=sumTotient[1]=0;
//     for(int i = 2; i<=maxN; i++){
//     	sumTotient[i] = totient2[i]*totient2[i] + sumTotient[i-1];
//     }

// }

void fuckPhi(){
    for(int i=2; i<=maxN; i++){
        totient2[i] = i;
    }
    for(int i =2; i<=maxN; i++){
        if(totient2[i]==i){
            for(int j=i; j<=maxN; j+=i){
                totient2[j]-=totient2[j]/i;
            }
        }
    }

    

}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	fuckPhi();
	// square sum of Phi using cumulative sum
    sumTotient[1]=0;
    for(int i = 2; i<=maxN; i++){
    	sumTotient[i] = (unsigned long long)totient2[i]*(unsigned long long)totient2[i] + sumTotient[i-1];
    }


	int kase = 1;
	int t;cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		unsigned long long x = sumTotient[b]-sumTotient[a-1];
		cout<<"Case "<<kase<<": "<<x<<"\n";
		kase++;
	}


	return 0;
}
