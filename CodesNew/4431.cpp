#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>

using namespace std;
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)>(b)?(b):(a))
#define abs(a) ((a)>0?(a):-(a))
#define REP(i,s,e) for (int i=int(s);i<=int(e);i++)
#define DN(i,s,e) for (int i=int(s);i>=int(e);i--)
#define DIS(ux,uy,vx,vy) (sqrt(pow(double(ux-vx),2)+pow(double(uy-vy),2)))
#define mem(a,val) memset(a,val,sizeof (a))
typedef long long ll;
const int INF=0x3f3f3f3f;
const int maxn=5*1e5 + 5;
const ll mod=1e9+7;
string s[maxn];
int len;
int main()
{
    int n;
    cin>>n;
    REP(i,1,n){
        cin>>s[i];
    }

    DN(i,n-1,1){
        len = s[i].length();
        for (int j = 1;j<s[i].length();j++){
            if (s[i][j]<s[i+1][j]){
                break;
            }
            if (s[i][j]>s[i+1][j]){
                len = j;
                break;
            }
        }
        string tmp;
        REP(k,0,len-1){
            tmp+=s[i][k];
        }
        s[i]=tmp;
    }
    
    REP(i,1,n){
        cout<<s[i]<<endl;
    }
    return 0;
}