// वाह मोदी जी वाह!

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> p64;
typedef vector<ll> v64;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(int i=s;i<=e;i++)
#define brep(i,s,e) for(int i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    // DANGER;
    ofstream out("output.txt");

    auto start = chrono::high_resolution_clock::now();
    
    ll n, m, k;
    cin>>n>>m>>k;
    v64 p(m);
    for(auto& i:p) cin>>i;

    ll L = 1, H = k, done = 0, here = 0, cnt = 1;
    // rep(i,0,m-1)
    ll i = 0;
    while( i<m )
    {
        // cout<<p[i]<<" "<<L<<" "<<H<<" here:"<<here<<" done:"<<done<<" cnt:"<<cnt<<"\n";
        if( p[i]>H )
        {
            if( here==0 )
            {
                L = H+1, H += k;
                continue;
            }
            L += here, H += here;
            done += here, cnt++, here = 0;
            continue;
            if( here!=0 ) cnt++;
            here = 1, done += here;
        }
        else here++;
        i++;
    }
    cout<<cnt<<endl;
    
    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}