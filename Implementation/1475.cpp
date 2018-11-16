#include<bits/stdc++.h>
#define f(a,n) for(ll i=a;i<n;i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define X first
#define Y second
using namespace std;
const ll mod=(1e+9)+7;
const ll size = 1e+5;

void solve()
{
    string s;
    cin>>s;
    ll n=s.size(),o=0,z=0;
    f(0,n)
    {
        if(s[i] == '0')
        {
            z++;
            o=0;
        }
        else
        {
            o++;
            z=0;
        }
        if(z == 7 || o == 7)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    #ifdef JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t beg = clock();
    solve();
    clock_t end = clock();
    fprintf(stderr, "%.3f sec\n", double(end - beg) / CLOCKS_PER_SEC);
    return 0;
}