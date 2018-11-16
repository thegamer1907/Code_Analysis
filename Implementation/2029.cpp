#include<bits/stdc++.h>
using namespace std ;
#include<math.h>
#include<string.h>
#define ll long long 
#define mod 1000000007
#define dd double

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,j,x=0,y=0,z=0,p=0;
    cin >> n ;
    int a[n+9][3] ;
    for(i=0;i<n;i++){
    	for(j=0;j<3;j++){
    		cin >> a[i][j] ;
    	}
    }
    for(i=0;i<3;i++){
    	for(j=0;j<n;j++){
    		p+=a[j][i] ;
    	}
    	if(p==0 && i==0)
    		x=1 ;
    	if(p==0 && i==1)
    		y=1 ;
    	if(p==0 && i==2)
    		z=1 ;
    	p=0;
    }
    if(x==1 && y==1 && z==1)
    	cout << "YES" ;
    else
    	cout << "NO" ;
    return 0 ;
}