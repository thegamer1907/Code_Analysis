#include<bits/stdc++.h>
#define mt make_tuple
#define mp make_pair
#define pu push_back
#define INF 1000000001
#define MOD 1000000007
#define ll long long int
#define ld long double
#define vi vector<int>
#define vll vector<long long int>
#define sc(n) scanf("%d",&n);
#define scll(n) scanf("%lld",&n);
#define scld(n) scanf("%Lf",&n);
#define scr(s) {char temp[1000000];scanf("%s",temp);s = temp;}

using namespace std;

ll get1(ll*l,int i,int j,int n)
{
  if(i==0) return l[j];
  return l[j]-l[i-1];
}

int bsearch1(ll*l,int n,ll value,int i)
{
  int beg=  i,end = n-1;
  int minindex = n;
  while(beg<=end)
  {
    int mid = (beg+end)/2;
    if(get1(l,i,mid,n)>=value) {minindex = min(minindex,mid);end = mid-1;}
    else beg = mid+1;
  }
  return minindex;
}

int main()
{
  int n,q;
  sc(n);sc(q);
  ll*l = new ll[n];
  ll*m = new ll[q];
  ll*pref = new ll[n];
  for(int i=0;i<n;i++) {scll(l[i]);}
  pref[0] = l[0];
  for(int i=1;i<n;i++) pref[i] = pref[i-1]+l[i];
  for(int i=0;i<q;i++) scll(m[i]);
  int j = 0;
  ll left = 0;
  for(int i=0;i<q;i++)
  {
    ll k = m[i];
    if(k>get1(pref,0,n-1,n))
    {

    }
    // cout<<"i: "<<i<<" k: "<<k<<endl;
    if(left!=0)
    {
      if(k>=get1(pref,j+1,n-1,n)+left) {cout<<n<<endl;j = 0;left = 0;continue;}
      int begindex = j;
      if(k>=left)
      {
        k-=left;
        begindex = j+1;
        j = bsearch1(pref,n,k,j+1);
        if(j==n || (j==n-1 && get1(pref,begindex,j,n)-k==0))
        {
          cout<<n<<endl;
          j = 0;left = 0;
          continue;
        }
        else
        {
          left = get1(pref,begindex,j,n)-k;
        }
        if(left==0) j++;
      }
      else left-=k;
    }
    else
    {
      if(k>get1(pref,j,n-1,n)) {cout<<n<<endl;j = 0;left = 0;continue;}
      int begindex = j;
      j = bsearch1(pref,n,k,j);
      // cout<<"j: "<<j<<" value: "<<k<<endl;
      if(j==n || (j==n-1 && get1(pref,begindex,j,n)-k==0))
      {
        cout<<n<<endl;
        j = 0;left = 0;
        continue;
      }
      else
      {
        // cout<<get1(pref,begindex,j,n)<<" "<<k<<endl;
        left = get1(pref,begindex,j,n)-k;
      }
      if(left==0) j++;
    }
    // cout<<"left: "<<left<<" j: "<<j<<endl;
    cout<<n-j<<endl;
  }
  return 0;
}
