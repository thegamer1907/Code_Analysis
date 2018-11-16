#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kholoud ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define enter cin >>
#define get cout<<
#define lp(i, n)		for(int i=0;i<(int)(n);++i)




/*
int Binary_Search(ll t)
{
    int  frist=1,ende=n ,mid;
    while(frist<ende)
    {
        mid=(frist+ende)/2;
        if(t>=a[mid])ende =mid;
        else frist =mid+1;
    }
    return frist;
}*/

//puts;
//*min_element for array and container
//*max_element for array and container
//INT_MAX for the end limit
/*
void solve()
{   kholoud

}
*/
//islower () to check uppercase;
//sort(v.begin(),v.end(),greater<int>());
/*
unsigned GCD(unsigned u, unsigned v) {
    while ( v != 0) {
        unsigned r = u % v;
        u = v;
        v = r;
    }
    return u;
}
*/

int main()
{
    kholoud
    int n,t,x,j;
    enter  n;
    enter t;
   int arr[n];
  for(int i=1;i<n;i++)enter arr[i];
  for( j=1;j<t;j+=arr[j]);
  (j==t)?puts("YES"):puts("NO");
 return 0;

}
