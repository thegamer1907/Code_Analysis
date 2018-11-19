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
float t[5];
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    float h, m, s, t1, t2;
    while(cin>>h>>m>>s>>t1>>t2)
    {
        t1*=5;
        t2*=5;
        h*=5;
        if(t1>t2)
            swap(t1, t2);
        t[0] = s;
        t[1] = m + s/60.0;
        t[2] = h + m/12.0;
        
        f(i, 0, 2)
            if(t[i]>60)
                t[i]-=60;
                
        sort(t, t+3);
        f(i, 0, 2)
            if(t1==t[i])
            {
                cout << "NO\n";
                return 0;
            }
//        cout << t[0] << " ";
//        cout << t[1] << " ";
//        cout << t[2] << " => ";
//        cout << t1 << " ";
//        cout << t2 << " ";
        
        if((t1>=t[0] && t1<=t[1]) && (t2>=t[0] && t2<=t[1]))
            cout << "YES\n";
        else if((t1>=t[1] && t1<=t[2]) && (t2>=t[1] && t2<=t[2]))
            cout << "YES\n";
        else if((t1<=t[0]) && (t2<=t[0] || t2>=t[2]))
            cout << "YES\n";
        else if((t1>=t[2]) && (t2<=t[0] || t2>=t[2]))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

