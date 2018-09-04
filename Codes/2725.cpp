#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
#define fs first
#define se second
#define ll long long
#define pb push_back
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i >= l; i--)
#define mod       100000000
const int N = 1000001;
int lps[N];
void f(string s)
{
    int n = s.length();
    int j = 0,i = 1;
    while(i<n)
    {
        if(s[i] == s[j])
        {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if(j!=0) j = lps[j-1];
            else lps[i]=0, i++;
        }
    }
}
int ser(string t, string p)
{
    int i=0,j=0;
    //cout<<t<<" "<<p;
    while(i<t.length() && j<p.length())
    {
        if(t[i]==p[j])
        {
            i++,j++;
        }
        else
        {
          if(j!=0)j=lps[j-1];
          else i++;
        }
    }
    return j;
}
int main()
{
   // freopen("input.txt", "r", stdin);
    string s; cin>>s;
    int n = s.length();
    f(s);
    if(lps[n-1]==0)
    {
        cout<<"Just a legend";
        return 0;
    }
    int l1 = lps[n-1];
    int l2 = lps[lps[n-1]-1];
    //cout<<l1<<" "<<l2;
    //if(l1==l2)l1--;
    string t = s.substr(1,n-2);
    string p = s.substr(0,l1);
    // cout<<l1<<l2;
    if(ser(t,p) == p.length())cout<<p;
    else
    {
        p = s.substr(0, l2);
        if(l2 != 0 && ser(t,p) == p.length())cout<<p;
        else cout<<"Just a legend";
    }
    return 0;
}
