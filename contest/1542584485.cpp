#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <stack>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 100005;
typedef long long int ll;
void scan_d(int &ret)
{
    char c;
    ret = 0;
    while((c=getchar())<'0' || c>'9');
    while (c>='0'&&c<='9')ret=ret*10+(c-'0'),c=getchar();
}
string t[150];
int main()
{
    //cin.tie(0);
    //ios::sync_with_stdio(false);
    string ans;
    cin>>ans;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>t[i];
    }
    int ok = 0;
    for(int i=0;i<n;++i){
        if(t[i][1] == ans[0]){
            for(int j=0;j<n;++j){
                if(t[j][0] == ans[1]){
                    ok=1;
                    break;
                }
            }
            if(ok)break;
        }
    }
    for(int i=0;i<n;++i){
        if(t[i] == ans){
            ok = 1;
            break;
        }
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}