#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define ll long long
#define pii pair < ll , ll >
#define vi vector < int >
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define init(x, a) memset(x, a, sizeof(x))
#define vll vector < long long int >
#define sll set < long long int >
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fastIO;
    ll t,n,i,j,k,a[100001],m,q,sum=0;
    set < ll > st;
    set < ll >::iterator it;
    map < ll , ll > mp;
    cin>>n;
    fo(i,n)
    {
        cin>>a[i];
        sum += a[i];
        st.insert(sum);
        mp[sum] = i+1;
    }
    cin>>m;
    fo(i,m)
    {
        cin>>q;
        it = st.lower_bound(q);
        cout<<mp[*it]<<endl;
    }
}