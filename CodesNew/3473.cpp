#include <iostream>
#include <algorithm>
#include<cstdio>
#include<stack>
#include <deque>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
#include <deque>
#include <vector>
using namespace std;
typedef long long ll;
map<char,ll> M;
int n,m;
int a[101010]={0};
bool cmp(int p,int q)
{
    return p>q;
}
int main()
{
    int i,p,c,maxx=0,ans2=0,ans1=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    maxx=a[0];
    ans2=a[0]+m;
    for(i=1;i<n;i++)
    {
        while(a[i]<a[0])
        {
            a[i]++;
            m--;
        }
    }
    if(m>0)
    {
        if(m%n==0)
            ans1=m/n+a[0];
        else
            ans1=m/n+a[0]+1;
    }
    else
        ans1=a[0];
    cout<<ans1<<" "<<ans2;
    return 0;
}

		 	     	  			 	 	 					    	