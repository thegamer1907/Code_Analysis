#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long
using namespace std;
int32_t main() {
    int a,b,c,suma=0,sumb=0,sumc=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;
    }
    if(suma==0&&sumb==0&&sumc==0)
     cout<<"YES";
     else
      cout<<"NO";
	return 0;
}
