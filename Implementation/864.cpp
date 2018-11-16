#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#define  ll  long long
#define ull unsigned long long
#define  sl(a)  scanf("%lld",&a);
using namespace std;
int main()
{
    int n,i,j,k,l,m,g=0,b,t;
    string s;
    cin>>n>>t;
    cin>>s;
    char c;
    while(t--)
    {
    for(i=0;i<n-1;i++)
    {
        if( s[i] == 'B' && s[i+1] == 'G' )
           {
               swap( s[i], s[i+1] ) ;
               i++ ;
           }
    }
    }

     cout<<s<<endl;
    return 0;
}
