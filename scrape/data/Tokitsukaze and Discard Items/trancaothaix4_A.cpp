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
    fu(i,1,m) cin >> a[i];
    ll k2=(a[1]/k)*k;
    if(a[1]>k2) k2+=k;
    fu(i,1,m){
    	a[i]-=de;
    	//cout << a[i] << " ";
    	if(a[i]<=k2 && a[i+1]-de>k2){
			de=i;
			k2=(a[i+1]-de)/k*k;
			if(a[i+1]-de>k2) k2=((a[i+1]-de)/k+1)*k;
			res++;
			mark=i;
			//cout << de << endl;
			//cout << res <<" "<< k2 <<endl;
    	}
    }
    if(mark!=m) res++;
    cout << res;
    return 0;
}
/*1000000000000000000 10 100
10973277125592 11489228564132 13964249121218 47857350531675 54575940163885 59680117576243 71587667562432 71588949387097 89933330836322 100821691640060
*/