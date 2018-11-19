#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi first
#define se second
#define mp make_pair
#define in insert
#define pb push_back

ll t,n,arr[20],sum,k,var,a;





int main() {
    cin>>n>>k;
    for(ll x=0;x<n;x++){
        sum=0;
        for(ll y=0;y<k;y++){
            scanf("%lld",&a);
            sum+=(a*(1<<y));
        }
        arr[sum]++;
    }
    for(ll x=0;x<16;x++){
        for(ll y=0;y<16;y++){
            if((x&y)==0&&arr[x]>0&&arr[y]>0){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
	return 0;
}
