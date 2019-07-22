#include <iostream>
#include <algorithm>

#define fu(i,a,b) for(int i=a ; i<=b ; i++)
#define fd(i,a,n) for(int i=a ; i>=b ; i--)
#define ll long long

using namespace std;

const ll M=1e18;
int m;
ll n,mark,a[100002],k,de,res;

int main()
{
    cin >> n >> m >> k;
    int k2=k;
    fu(i,1,m) cin >> a[i];
    fu(i,1,m){
    	a[i]-=de;
    	//cout << a[i] << " ";
    	if(a[i]<=k2 && a[i+1]-de>k2){
			de=i;
			if(a[i+1]-de>k2) k2+=k;
			res++;
			mark=i;
			//cout << res <<" "<< k2 <<" ";
    	}
    	while(a[i]>k2) k2+=k;
    }
    if(mark!=m) res++;
    cout << res;
    return 0;
}