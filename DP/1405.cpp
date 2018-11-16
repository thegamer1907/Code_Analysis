#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long int ll;
typedef vector< pair<int, int> > vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long int> vll;
typedef pair<int, int> pii;

const ll INF = 1e18;
const int inf = 1e9;
const int MOD = 1e9 + 7;
const int nax = 1000000 + 10;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
   int n;
   cin>>n;
   int a[n];
   int i,j;
   for(i=0;i<n;i++)
   cin>>a[i];
   j=0;
   int s=0,l=0,r=0,t=0;
   for(i=0;i<n;i++)
   {
   	   if(a[i]==0)
   	   {
	        s++;
	        if(j<=s)
	        {  j=s;
	        l=t,r=i;
	        }
	   }
	   else
	   s--;
	  
	   if(s<=0)
	   {
	   	s=0;
	   	t=i+1;
	   }
   }
     j=0;
     for(i=l;i<=r;i++)
     j+=1-a[i];
   for(i=0;i<l;i++)
   j+=a[i];
   for(i=r+1;i<n;i++)
   j+=a[i];
   cout<<j;
	
}