/*input
5
2 7 3 4 9
3
1 25 11
*/

//2 9 12 16 25
#include <bits/stdc++.h>
using namespace std;
typedef vector<long int> vl;
typedef vector<long long int> vll;
typedef vector<int> vi;
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;
typedef long long int lli;
typedef long int li;

//#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<int>())

#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      repA(i, a, n)     for(int i = a; i <= (n); ++i)
#define      repD(i, a, n)     for(int i = a; i >= (n); --i)

#define pb push_back


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vi a(n);
    rep(i, n)
        cin>>a[i];
    repA(i, 1, n-1){
        a[i]+=a[i-1];
        //cout<<a[i]<<endl;
    }
    int m,x;
    cin>>m;
    while(m--){
        cin>>x;
        vit up;
        up=lower_bound(a.begin(),a.end(),x);
        cout<<up-a.begin()+1<<"\n";
    }
    return 0;
}





