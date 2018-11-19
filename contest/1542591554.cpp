#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define INF 200000000000LL
#define M 1000000007
#define ff first
#define ss second
#define SIZE 100005
#define fast cin.tie(0);cout.tie(0);cin.sync_with_stdio(false)
#define endl '\n'
#define mset(v,x) memset(v,x,sizeof(v))
typedef long long ll;
using namespace std;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main()
{
    //fast;
#ifdef vanshaj
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w",stdout);
#endif // vanshaj
string s,ans;
char f , l;
bool flag1 = false, flag2 = false;
cin >> ans;
f = ans[0]; l = ans[1];
ll n;
cin >> n;
while(n--)
{
    cin >> s;
    if (s == ans)
    {
        cout<<"YES";
        exit(0);
    }
    if (s[1] == f)
        flag1 = true;
    if (s[0] == l)
        flag2 = true;
}
if(flag1 && flag2)
    cout<<"YES";
else cout<<"NO";
return 0;}
