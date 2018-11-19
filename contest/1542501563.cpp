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
 {  string ss;
    int n, i;
    cin>>ss;
    cin>>n;
    string s2[n];
    rep(i,0,n)
    {
        cin>>s2[i];
    }
    rep(i,0,n)
    {
        if( ss == s2[i])
        {
            cout<<"YES\n";
            return 0;
        }
    }
    int flag = 0;
    rep(i,0,n)
    {
        if( ss[0] == s2[i][1])
        {
            flag++; break;
        }
    }
    rep(i,0,n)
    {
        if( ss[1] == s2[i][0])
        {
            flag++; break;
        }
    }
    (flag == 2)?cout<<"YES\n":cout<<"NO\n";
    
	return 0;
 }
