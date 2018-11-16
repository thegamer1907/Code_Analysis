#include<bits/stdc++.h>
#define MAX_N 100000 /*update every time*/

/*input*/
#define si(a) scanf("%d",&a);
#define sii(a,b) scanf("%d%d",&a,&b);
#define sai(a,n) for(int i=0;i<n;i++) scanf("%d",a+i);

using namespace std;

/*typedefs*/
typedef long long ll;

int n,m,arr[MAX_N],l[MAX_N];
set<int> freq;
int sol[MAX_N];

int main(int argc, char const *argv[]) {
  #ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  freopen("output.out", "w", stdout);
  #endif

  sii(n,m);
  // cout<<n<<" "<<m<<"\n";
  sai(arr,n);
  sai(l,m);
  for (int i = n; i > 0; --i)
  {
  	freq.insert(arr[i-1]);
  	sol[i-1]=freq.size();
  }
  for (int i = 0; i < m; ++i)
  {
  	printf("%d\n",sol[l[i]-1]);
  }
  return 0;
}
