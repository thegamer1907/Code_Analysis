#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_base::sync_with_stdio(false)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

#ifdef DEBUG
     #define debug(args...)            {dbg,args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif


string str[107];

int main (void) {
  	fastcin;
  	string man;
  	cin >> man;
  	int n;
  	cin >> n;
  	for(int i=0;i<n;i++)
  		cin >> str[i];

  	bool flag = false;
  	for(int i=0;i<n;i++){
  		for(int j=0;j<n;j++){
  			if(str[i] == man)
  				flag = true;
  			if(str[i][0] == man[1] && str[j][1] == man[0])
  				flag = true;
  		}
  	}
  	if(flag)
  		cout << "YES" << endl;
  	else
  		cout << "NO" << endl;
	return 0;
}

