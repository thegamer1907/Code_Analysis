#include        <bits/stdc++.h>
#define ll      long long int
#define pb      push_back
#define mp      make_pair
#define F       first
#define S       second
#define MOD     1000000007
#define pii     pair<int,int>
#define vi      vector<int>
#define fio     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define N       200010
#define M       1000000000000000
#define O       1LL
using namespace std;


int main()
{
    fio;
    ll n;
    cin>>n;
    ll a[n+1][2];
    a[1][0]=0;
    a[1][1]=3;
    for(int i=2; i<=n; i++){
        a[i][0]=a[i-1][1];
        a[i][1]=(2*a[i-1][1]+3*a[i-1][0])%MOD;
    }
    cout<<a[n][0];
    
    
    return 0;
}





