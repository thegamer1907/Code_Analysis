#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()
#define x first
#define y second
using namespace std;
typedef long long ll;
typedef pair<int, int>pii;
const int maxn=1e5+100;
int n, arr[maxn];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr[i];
    int bestcnt=INT_MAX, ans;
    for(int i=0; i<n; i++)
    {
        int laps=arr[i]/n+(arr[i]%n>i);
        if(laps>=bestcnt)continue;
        else bestcnt=laps, ans=i+1;
    }
    cout<<ans<<"\n";
    return 0;
}
