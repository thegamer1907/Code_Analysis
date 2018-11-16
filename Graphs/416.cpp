#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<map>
#include<string>
#include<string.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#define Fi(a,b) for (ll i = a ; i<=b ;i++ )
#define Fj(a,b) for (ll j = a ; j<=b ;j++ )
#define Fk(a,b) for (ll k = a ; k<=b ;k++ )
#define pb push_back
#define BR cout<<endl
#define KALA ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define mod 1000000007
#define I cin>>
#define O cout<<
#define XXX return 0
using namespace std;

int main()
{
     KALA;
     int n,k;
     I n;
     I k;
       char a[n];
       I a;

        for (int j=0; j<k; j++)
        {
             for(int i=0; i<n; )
               {

                   if ( a[i]=='B' && a[i+1]=='G' )
                   {
                          ll t=a[i];
                          a[i]=a[i+1];
                          a[i+1]=t;

                          i=i+2;
                     }
                      else
                        i++;
                }
        }

			O a<<endl;
	XXX;
}

