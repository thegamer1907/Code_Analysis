#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <sstream>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <climits>
#include <cstdio>

#define test freopen("/home/reza/CLionProjects/DataStructureUni/in.txt","r",stdin)
#define testout freopen("/home/reza/C++/ACMTraining/acm/out.txt", "w", stdout);
#define rep(i,ii,iii) for(int i=ii;i<iii;i++)
typedef long long ll;
using namespace std;



//-------------------------:)-------------------------//

string a[105];

int main() {
    //test;
    string ans; cin>>ans;
    ll n; cin>>n;

    rep(i,0,n)
        cin>>a[i];

    rep(i,0,n){
        if(a[i]==ans){
            cout<<"YES";
            return 0;
        }
    }

    rep(i,0,n){
        rep(j,0,n){
            if( a[i][1] == ans[0] && a[j][0] == ans[1] || a[j][1] == ans[0] && a[i][0] == ans[1] ){
                cout<<"YES";
                return 0;
            }
        }
    }


    cout<<"NO";
    return 0;

}

	 		 		 	     	  	 	 	    				