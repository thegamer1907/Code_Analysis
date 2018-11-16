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
    int n,t,i,j,p=0;
    cin >> n >> t ;
    char s[n+9] ;
    cin >> s ;
    for(i=0;i<t;i++){
    	for(j=0;j<n-1;j++){
    		if(s[j]=='B' && s[j+1]=='G'){
    			s[j] = 'G' ;
    			s[j+1] = 'B' ;
    			j++;
    		}
    	}
    }
    cout << s ;
    return 0 ;
}