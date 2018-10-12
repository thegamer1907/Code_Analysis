/*####################################
##                                  ##
#  U   U   L      U   U   GGGGG  66  #
#  U   U   L      U   U   G  	     #
#  U   U   L      U   U   G GGG      #
#  UUUUUU  LLLLL  UUUUUU  GGGGG      #
##                                  ##
####################################*/

/*
 tHE cODE iS wRITTEN bY uLUG'BEK aBDIMANABOV;
	lANGUAGE = gNU g++11 5.1.0;
	sYSTEM eXIT_sUCCES;
*/

#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a; i<n; i++)
#define per(i,a,n) for(int i=n-1; i>=0; i--)

typedef long long ll;
typedef long double ld;
#define vi vector<int>;
#define pii pair<int,int>;

using namespace std;

int main()
{
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,m;
cin>>n>>m;

set<string> a,b;
rep(i,0,n)
{
    string j;
    cin>>j;
    a.insert(j);
}

rep(i,0,m)
{
    string j;
    cin>>j;
    b.insert(j);
}

int aa=a.size(),bb=b.size();
if(aa>bb){cout<<"YES"; return 0;}
else if(aa<bb){cout<<"NO"; return 0;}

for(set<string>::iterator it=a.begin();it!=a.end();it++)
{
    b.insert(*it);
}
int s= b.size();

if(s%2)cout<<"YES"; else cout<<"NO";
    return 0;
}

