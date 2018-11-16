#include<bits/stdc++.h>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define rep for(i=0;i<n;i++)
#define repr for(i=n-1;i>=0;i--)
#define ll long long int
#define pii pair<int,int>
#define pll pair<long long int, long long int>
#define l length()
#define inf 100000001
#define max 10000007
#define mod 1000000007
#define lb lower_bound
#define up upper_bound
#define beg begin()
#define end end()
#define rep1 for(i=1;i<n;i++)
#define vr vector
#define ef else if

using namespace std;





int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    ll i,j=0,k=0;
    ll c=0;
    string a;
    cin>>a;
	for(i=0;i<a.l;i++)
	{
	   if(j==1)
	   {
	       if(a[i]=='B' && a[i+1]=='A')
	       {
	           j++;
	           k=1;
	           break;
	       }
	   }
	   
	   if(a[i]=='A' && a[i+1] =='B'&& c==0)
	   {    c++;
	       i++;
	       j++;
	       
	   }
	   
	}
	
	if(k==1)
	cout<<"YES";
	
	else
    {
            j=c=k=0;
            for(i=0;i<a.l;i++)
    	{
    	   if(j==1)
    	   {
    	       if(a[i]=='A' && a[i+1]=='B')
    	       {
    	           j++;
    	           k=1;
    	           break;
    	       }
    	   }
    	   
    	   if(a[i]=='B' && a[i+1] =='A'&& c==0)
    	   {    c++;
    	       i++;
    	       j++;
    	       
    	   }
    	   
    	}
    	
    	if(k==1)
	cout<<"YES";
	else
	cout<<"NO";
    }
	
	return 0;
}

