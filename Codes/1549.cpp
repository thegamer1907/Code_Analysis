
#include <bits/stdc++.h>

#define sd(n) 		scanf("%d",&n)
#define sld(n) 		scanf("%lld",&n)

#define pd(n) 		printf("%d\n",n)
#define pld(n) 		printf("%lld\n",n)


#define MAXI 		(int)1e5+10
#define pb          push_back
#define mp          make_pair

#define F           first
#define S           second

#define test int t; sd(t);while(t--)

#define ERROR (ll)1e15L

typedef  long long ll ;



using namespace std;

ll arr[MAXI];
ll temp[MAXI];

int n;

ll check(int k,ll money){

	if(k>n)return ERROR;


	for(int i=0;i<n;i++){
		temp[i]=(i+1)*(ll)k+arr[i];
	}

	sort(temp,temp+n);

	ll cSum=0;

	for(int i=0;i<n;i++){

		if(cSum+temp[i]>money)return ERROR;


		cSum+=temp[i];


		if(k<=(i+1))return cSum;

	}

	return cSum;

}

int main(){

	sd(n);
	ll money;sld(money);

	for(int i=0;i<n;i++){
		sld(arr[i]);
	}

	int low=1,high=n,ans=0;

	ll minCost=0;


	while(low<=high){

		int mid=low+(high-low)/2;

		if(check(mid,money)==ERROR){
			high=mid-1;
		}
		else{
			minCost=check(mid,money);

			ans=mid;
			low=mid+1;
		}
	}

	cout << ans << " " << minCost << endl;

	return 0;
}