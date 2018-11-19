#include <iostream>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;
const int maxn=110;

string t,a[maxn];
int main(){
    cin>>t;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    bool f=false;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            string tmp=a[i]+a[j];
            if(tmp.find(t)!=-1){
                f=true;
                break;
            }
        }if(f) break;
    }
    if(f) printf("YES\n");
    else printf("NO\n");
	return 0;
}
