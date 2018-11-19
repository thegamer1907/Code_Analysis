#include <iostream>
#include <iomanip>
#include <climits>
#include <stack>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <cassert>

#define FOR(i,n) for(int i=0,_n=n;i<_n;i++)
#define FORR(i,s,n) for(int i=s,_n=n;i<_n;i++)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pli pair<ll,int>
#define vi vector<int>
#define fs first
#define sec second

#define maxn 102

using namespace std;
typedef long long ll;

const ll MOD = 1000000007LL;

int n;

set<int> vsebina[2*maxn][16];
string pref[2*maxn];
string suff[2*maxn];

template <typename T>
std::set<T> getUnion(const std::set<T>& a, const std::set<T>& b)
{
      std::set<T> result = a;
        result.insert(b.begin(), b.end());
          return result;
}

int main(){
    scanf("%d",&n);
    FOR(i,n){
        string curr;
        cin >> curr;
        if(curr.length()<16)pref[i]=curr,suff[i]=curr;
        else pref[i]=curr.substr(0,16),suff[i]=curr.substr(curr.length()-16,16);
        FOR(l,16){
            int mask=0;
            int j=0;
            for(;j<min(l,(int)curr.length());j++){mask<<=1;mask+=curr[j]-'0';}
            for(;j<curr.length();j++){
                vsebina[i][l].insert(mask);
                mask<<=1;
                mask&=(1<<l)-1;
                mask+=curr[j]-'0';
                vsebina[i][l].insert(mask);
            }
        }
        /*cout << "pref " << pref[i] << " suff " << suff[i] << endl;
        FOR(l,16){
            cout << "dolz: " << l;
            for(set<int>::iterator it = vsebina[i][l].begin(); it!= vsebina[i][l].end();it++)cout << ' ' << *it;
            cout << endl;
        }*/
    }
    int m;
    scanf("%d",&m);
    int pos=n;
    FOR(i,m){
        int a,b;
        scanf("%d%d",&a,&b);
        a--,b--;
        pref[pos]=pref[a]+pref[b];
        if(pref[pos].length()>16)pref[pos]=pref[pos].substr(0,16);
        suff[pos]=suff[a]+suff[b];
        if(suff[pos].length()>16)suff[pos]=suff[pos].substr(suff[pos].length()-16,16);
        string s = suff[a]+pref[b];
        FOR(l,16){
            int mask=0;
            int j=0;
            for(;j<min(l,(int)s.length());j++){mask<<=1;mask+=s[j]-'0';}
            for(;j<s.length();j++){
                vsebina[pos][l].insert(mask);
                mask<<=1;
                mask&=(1<<l)-1;
                mask+=s[j]-'0';
                vsebina[pos][l].insert(mask);
            }
            vsebina[pos][l]=getUnion(vsebina[pos][l],vsebina[a][l]);
            vsebina[pos][l]=getUnion(vsebina[pos][l],vsebina[b][l]);
        }
        int res=0;
        while(vsebina[pos][res+1].size()>=(1<<(res+1)))res++;
/*cout << "pref " << pref[pos] << " suff " << suff[pos] << endl;
        FOR(l,16){
            cout << "dolz: " << l;
            for(set<int>::iterator it = vsebina[pos][l].begin(); it!= vsebina[pos][l].end();it++)cout << ' ' << *it;
            cout << endl;
        }
*/
        printf("%d\n",res);
        pos++;
    }
	return 0;
}
