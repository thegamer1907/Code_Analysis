#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<cctype>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<iomanip>
#include<sstream>
#include<limits>
#include <bitset>
#define ll long long
#define inf 0x3f3f3f3f
using namespace std;
const ll INF = 1e18;
const int maxn = 2e5+10;
const ll MOD = 1000000007;
const double EPS = 1e-10;
const double Pi = acos(-1.0);
string ss[maxn];
int main(){
#ifdef LOCAL
	//freopen("C:\\Users\\lanjiaming\\Desktop\\acm\\in.txt","r",stdin);
	//freopen("output.txt","w",stdout);
#endif
//ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)cin>>ss[i];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
    {
        string tt = ss[i]+ss[j];
        if (tt.find(s)!=-1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
