#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	#define FOR0(i,n) for(i=0;i<n;i++)
    #define FOR(i,j,n) for(i=j;i<n;i++)
    #define FORD(i,j,k) for(i=j;i>=k;i--)
    #define pb push_back
    #define mp make_pair
    #define ff first
    #define ss second
    #define inf 1000000000
	typedef long long ll;
	typedef pair<int,int> ii;
    typedef vector<int> vi;
    typedef vector<ii> vii;
    
    int t,n,i,j;
    string s,str;
    cin>>n>>t;
    cin>>s;
    
    FOR0(i,t)
    {
        str = s;
        FOR(j,1,n)
        {
            if(s[j] == 'G' && s[j-1] == 'B')
            {
                str[j-1] = 'G';
                str[j] = 'B';
            }
            
        }
        s = str;
    }
    
    cout<<s;
	return 0;
}
    