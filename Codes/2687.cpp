#include<bits/stdc++.h>

using namespace std;

#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen (x,"w",stdout)
#define LL                      long long
#define ULL                     unsigned long long
#define pb                      push_back
#define tcase                   cout<<"Case "<<C++<<": ";
#define all(a)                  a.begin(),a.end()
#define Unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end
#define ABS(x)                  ((x)<0?-(x):(x))
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define PI                      acos(-1.0)
#define ff                      first
#define ss                      second
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
#define FastRead                ios_base::sync_with_stdio(0);cin.tie(NULL);
#define FOR(x, l, r)            for (int x = l; x<=r; ++x)
#define REP(x,r)               for (int x = 0; x <r; ++x)
#define NN                      cout<<"\n";
#define NNN                     cout<<"\n------------------------------\n";

//***********************************************************************//
//                      SHAHED AHMED, CSE'15, IUT                        //
//***********************************************************************//


vector<int> z_function (string s) {
    int n = (int) s.size();
    vector<int> z(n, 0);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        if (i <= r) z[i] = min(r-i+1, z[i-l]);
        while (i+z[i] < n && s[z[i]] == s[i+z[i]]) z[i]++;
        if (i+z[i]-1 > r) r = i+z[i]-1, l = i;
    }
    return z;
}

int main()
{
        FastRead
        string s;
        cin>>s;

        vector<int> zf = z_function(s);

        int mx=0;

        for(int i=0;i<zf.size();i++)
        {
                if(i+zf[i]==zf.size())
                {
                        mx = max(mx,zf[i]-1);
                }
                else
                {
                        mx = max(mx,zf[i]);
                }
                //cout<<x<<" ";
        }

        int mx2=0;

        REP(i,zf.size())
        {
                if(i+zf[i]==zf.size()&& zf[i]<=mx)
                {
                        mx2 = max(mx2,zf[i]);
                }
        }


        if(mx2==0)
        {
                cout<<"Just a legend";
        }
        else cout<< s.substr(0,mx2);

}
