 #include <bits/stdc++.h>
 #define rep(i,a,b) for (i=a;i<b;i++)
 #define rep2(i,a,b) for (i=a;i>=b;i--)
 #define mod 1000000007
 //#include<boost/multiprecision/cpp_int.hpp>
 //using namespace boost::multiprecision;
 #define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 #define INF  1e9+5
 #define f first
 #define s second
 #define endl '\n'
 #define ll long long
 #define ii pair <int,int>
 #define pll pair <ll,ll>
 #define vi vector <int>
 #define vl vector <ll>
 #define vvi vector < vi >
 #define vii vector < ii >
 #define vvii vector < vii >
 #define vll vector < ll >
 #define vb  vector <bool>
 #define pb push_back
 #define mk make_pair
 #define sz(a) a.size()
 #define all(a) a.begin(),a.end()
 #define rall(a) a.rbegin(),a.rend()
 #define cset(a) __builtin_popcountll(a)
 using namespace std;
 int main()
 {  int i;
    int n, m, j;
    cin>>n>>m;
    int a[n][m], b[16];
    memset(b,0,sizeof(b));
    rep(i,0,n)
    {   int ans = 0;
        rep(j,0,m)
        {
            cin>>a[i][j];
            ans = (2*ans + a[i][j]);  
        }
        b[ans]++;
    }
    int flag = 0;
    if( b[0]!=0)
    {
        cout<<"YES\n";
        return 0;
    }
    //cout<<b[2]<<" "<<b[1]<<" "<<endl;
    rep(i,1,16)
    {
        rep(j,i+1,16)
        {
            if( b[i]!= 0 && b[j]!=0)
            {
                //cout<<i<<" "<<j<<endl;
                if( (i&j) == 0 )
                {
                    flag = 1;
                    //cout<<"hi"<<endl;
                    goto label;
                }
            }
        }
    }
    label:
    (flag == 1)?cout<<"YES\n":cout<<"NO\n";
    
    return 0;
 }
