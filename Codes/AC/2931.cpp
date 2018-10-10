#include<bits/stdc++.h>
 using namespace std;

 #define ll long long
 #define pb push_back
 #define fi first
 #define se second
 #define FILE "rooms"
 #define ull unsigned long long
 #define ld long double
 #define rev reverse
 #define pob pop_back()
 #define sz size()
 #define bb begin()
 #define ee end()

 vector<int> f(string a)
 {
     int n=a.sz;
     vector<int> z(n);
     for(int i=1,l=0,r=0;i<n;i++)
     {
         if(i<=r)
         {
             z[i]=min(r-i+1,z[i-l]);
         }
         while(i+z[i]<n && a[z[i]]==a[z[i]+i])
         {
             z[i]++;
         }
         if(i+z[i]-1>r)
         {
             l=i,r=i+z[i]-1;
         }
     }
     return z;
 }

 int main()
 {
     ios_base::sync_with_stdio(false);cin.tie(0), cout.tie(0);
     /*freopen(FILE ".in", "r", stdin);
     freopen( "out.txt", "w", stdout);*/
    string s;
    cin >> s;
    vector<int> z=f(s);
    /*for(int i=0;i<z.sz;i++)
    {
        cout << z[i] << " ";
    }
    cout << endl;*/
    vector<int> len;
    for(int i=z.sz-1;i>=1;i--)
    {
        if(z[i]==z.sz-i && z[i]!=0)
        {
            len.pb(i);
        }
    }
    if(len.sz==0)
    {
        cout << "Just a legend";
        return 0;
    }
    sort(len.bb,len.ee);
    int dp[s.sz];
    for(int i=0;i<s.sz;i++)
    {
        dp[i]=0;
    }
    int mx=-1;
    for(int i=1;i<z.sz;i++)
    {
        mx=max(mx,z[i]);
        dp[i]=mx;
    }
    int ans1=-1;
    for(int i=0;i<len.sz;i++)
    {
        if(dp[len[i]-1]>=z[len[i]])
        {
            ans1=z[len[i]];
            break;
        }
    }
    string asd="";
    for(int i=0;i<ans1;i++)
    {
        asd+=s[i];
    }
    if(asd=="")
    {
        cout << "Just a legend";
        return 0;
    }
    cout << asd;
    return 0;

 }

