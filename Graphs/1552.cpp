//UNSEEN07
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long int lli;
#define first ff
#define second ss
#define inf 0x3f3f3f3f
#define pb push_back  
#define clean(b) memset(b, 0, sizeof(b))
#define fastIO ios::sync_with_stdio(false); cin.tie(0);
#define tr(c, i) for (auto i = (c).begin(); i != (c).end(); i++)

int main(){
    int n,t; cin>>n>>t;

    int a[n];
    for(int i=1;i<n;++i)cin>>a[i];
    int cur=1;

    while(true){
        if(cur==t){
            cout<<"YES";
            return 0;
        }
        else if(cur<n)cur+=a[cur];
        else break;
    }

    cout<<"NO";
}