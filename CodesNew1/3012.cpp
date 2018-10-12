#include <bits/stdc++.h>

#define DEBUG 1
#define cerr if (DEBUG) cerr
#define fprintf if (DEBUG) fprintf
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define INF 0x3f3f3f3f
#define tii tuple<int,int,int>

#define MOD 100000000LL

const long double PI =2.0*acos(0.0);

using namespace std;

#define MAXN 1000006

int k,cur,n; string s;
long long m[MAXN],ans;

int main(){

    cin >> k >> s; n=s.length();
    m[0]++;
    for (int i=0;i<n;i++){
        cur+=s[i]-'0';
        if (cur>=k) ans+=m[cur-k];
        m[cur]++;
    }

    cout << ans;

}

/*

1010 2

1: 1
10: 1
101:


*/
