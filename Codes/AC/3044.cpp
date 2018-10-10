//coded by dsingh_24
#include<bits/stdc++.h>
#define ll          int
#define pb          push_back
#define mp          make_pair
#define pll         pair<long long,long long>
#define vll          vector<long long>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (long long)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int lps[1000005];
string s;
int ans;
void computeLPSArray()
{
    int len = 0;  
    int i; 
    lps[0] = 0;
    i = 1;
    while (i < s.size())
    {
       if (s[i] == s[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else 
       {
         if (len != 0)
         {
           len = lps[len-1];
         }
         else 
         {
           lps[i] = 0;
           i++;
         }
       }
       
    }
}
int Search(string s1)
{
    int j  = 0;
    int i = 1; 
    while (i < s.size())
    {
      if (s1[j] == s[i])
      {
        j++;
        i++;
      }
      if (j == s1.size())
      {
        ans++;
        j = lps[j-1];
      }
      else if (i < s.size()&& s1[j] != s[i])
      {
        if (j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
}
int main()
{
    cin>>s;
    ll i,j;
    computeLPSArray();
    int x=lps[s.size()-1];
 //   cout<<x<<" "<<ans<<"\n";
    if(x==0)
    {
    	cout<<"Just a legend";return 0;
	}
    Search(s.substr(0,x));
  //  cout<<x<<" "<<ans<<"\n";
    if(ans>1)cout<<s.substr(0,x);else
    if(lps[x-1]>0)
    cout<<s.substr(0,lps[x-1]);else
    cout<<"Just a legend";
	return 0;
}