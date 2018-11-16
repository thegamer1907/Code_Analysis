#include <bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define mp  make_pair
#define br  cout <<"\n";
#define all(x)  (x).begin(),(x).end()
#define sp " "
#define mp         make_pair
#define ff           first
#define ss          second
#define len(x,l ) int (l) =(x).length();
#define tr(c,i) for(auto i :(c))//use &i so that changes of loop are reflected in ds
#define pq priority_queue<int>p;//container adapter makes ascending q
using namespace std;
int mm = numeric_limits<int>::max();


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t ;
    int sa=0,sb=0,sc=0;
int a, b ,c ; 
while (cin >>a>>b>>c )
{
    sa+=a ;
    sb+=b;
    sc+=c; 
    
    
}
 if (sa==sb && sb==sc && sa== 0)cout <<"YES";
    else 
    cout << "NO";
    br

    return 0;
}
