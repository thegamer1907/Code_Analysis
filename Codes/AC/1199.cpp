#include <bits/stdc++.h>

using namespace std;

int n , m , A , B , BTH;
string a[1005] , b[1005] , both[1005] , str;
map<string,bool> mp;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i){
        cin>>str;
        mp[str] = 1;
    }
    for(int i=0;i<m;++i){
        cin>>str;
        if( mp[str] ) both[BTH++] = str , mp[str] = 0;
        else b[B++] = str;
    }
    for(map<string,bool>::iterator it=mp.begin(); it!=mp.end(); ++it)
        if(it->second) a[A++] = it->first;

    puts( BTH%2 ?  B<=A ? "YES" : "NO" : A<=B ? "NO" : "YES" );
    return 0;
}
