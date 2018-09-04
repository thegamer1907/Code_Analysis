
#include <bits/stdc++.h>
#define sd(n) 		scanf("%d",&n)
#define sld(n) 		scanf("%lld",&n)
#define pd(n) 		printf("%d\n",n)
#define pld(n) 		printf("%lld\n",n)
#define pb          push_back
#define mp          make_pair
#define F           first
#define S           second
#define test int t; sd(t);while(t--)

#define MAXI (int)1e7 +1

typedef long long ll;

using namespace std;

int P[MAXI];

int cnt=0;

int arr[MAXI];
int primes[MAXI];

ll prefix[MAXI];


int main(){

	for(int i=2;i<=sqrt(MAXI);i++){

		if(P[i]==0){

			for(int j=i*i;j<MAXI;j+=i){
				P[j]=1;
			}
		}
	}


	for(int i=2;i<MAXI;i++){

		if(P[i]==0){
			primes[cnt++]=i;
		}
	}



	int n,num;sd(n);


	for(int i=0;i<n;i++){
		sd(num);arr[num]++;
	}


	for(int i=0;i<cnt;i++){

		int totalCnt=0;


		for(int j=primes[i];j<MAXI;j+=primes[i]){

			totalCnt+=arr[j];
		}

		prefix[primes[i]]+=totalCnt;
	}



	for(int i=3;i<MAXI;i++){
		prefix[i]+=prefix[i-1];
	}


	test{

		int l,r;sd(l);sd(r);


		r=min(r,(int)1e7);
		l=min(l,(int)1e7);


		ll ans=prefix[r]-prefix[l-1];

		pld(ans);
	}

	return 0;





}