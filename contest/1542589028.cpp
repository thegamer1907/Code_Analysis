/*=================================*\
                                   
      Md. Shahidul Islam           
         CSE, BRUR                 
      Rangpur, Bangladesh          
 mail: shahidul.cse.brur@gmail.com 
 FB  : fb.com/shahidul.brur        
 Blog: shahidul-brur.blogspot.com 
\*=================================*/
#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define ull      unsinged long long
#define vi       vector<int>
#define vll      vector<ll>
#define ii       pair<int, int>
#define vii      vector<pair<int, int> >
#define vs       vector<string>
#define vd       vector<double>
#define mii       map<int, int>
#define mli       map<ll, int>
#define msi       map<string, int>

#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define sz              size()
#define all(a)          a.begin(), a.end()
#define f(i, a, b)      for(int i=(a);i<=(b);i++)
#define F(i, a, b)      for(int i=(a);i>=(b);i--)
#define pi              acos(-1.0)
#define eps             1e-6
#define mem(a, b)       memset(a, b, sizeof(a))
#define mod             1000000007
#define inf             1e9
//             0123456789
const int MX = 100000;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    while(cin>>s)
    {
        int n;
        cin>>n;
        int f0 = 0;
        int f1 = 0;
        int s0 = 0;
        int s1 = 0;
        while(n--)
        {
            string w;
            cin>>w;
            if((w[0]==s[0] && w[1]==s[1]) || (w[0]==s[1] && w[1]==s[0]))
            {
                cout << "YES\n";
                return 0;
            }
            if(w[0]==s[0])
                f0=1;
            if(w[0]==s[1])
                s0=1;
            if(w[1]==s[0])
                f1=1;
            if(w[1]==s[1])
                s1=1;
        }
        if((f1 && s0))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

