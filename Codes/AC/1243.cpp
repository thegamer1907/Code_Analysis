#include <bits/stdc++.h>

using namespace std;

map<string,int> b1,b2;
int n,m,cnt;
string t;

int main()
{
    cin>>n>>m;
    for(int i=0;i<n&&cin>>t;i++)b1[t]++;
    for(int i=0;i<m&&cin>>t;i++)if(b1[t])cnt++;
    while(1){
        if(!n){cout<<"NO";break;}
        else if(cnt)n--,m--,cnt--;
        else n--;

        if(!m){cout<<"YES";break;}
        else if(cnt)m--,n--,cnt--;
        else m--;
    }
    return 0;
}
