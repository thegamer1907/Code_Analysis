#include <iostream>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<unordered_map>
#include<map>
#include<cmath>
#include<vector>
#include<iomanip>
#include<queue>
using namespace std;
#define inf 1000003
#define x first
#define y second
#define ll long long
#define ii pair<ll, ll>
#define vi vector<ll>
#define pb push_back
#include<set>
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll k, n;

int main()
{
 //   ios
    ll i, j, a, b, ans=0, c, d;
    cin>>n>>k;
    string s[n+1];
    s[0]= "";
    for(i=0; i<=k; i++)
        s[0]= s[0]+'#';
    for(i=1; i<=n; i++) {
        cin>>s[i];
        s[i]= '#' + s[i];
    }
    ll hor[n+1][k+1]={0}, ver[n+1][k+1]= {0};
    memset(hor, 0, sizeof hor);
    memset(ver, 0, sizeof ver);

    for(i=1; i<=n; i++){
        for(j=1; j<=k; j++){
            hor[i][j]= hor[i-1][j]+ hor[i][j-1]- hor[i-1][j-1];
            ver[i][j]= ver[i-1][j]+ ver[i][j-1]- ver[i-1][j-1];
            if(s[i][j] == '.'){
                if(s[i-1][j] == '.')
                    ver[i][j]++;
                if(s[i][j-1] == '.')
                    hor[i][j]++;
            }
        }
    }
    ll q;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c>>d;
        ans= hor[c][d] - hor[a-1][d] - hor[c][b] + hor[a-1][b];
        ans+= ver[c][d] - ver[a][d] - ver[c][b-1] + ver[a][b-1];
        cout<<ans<<"\n";
    }
}
