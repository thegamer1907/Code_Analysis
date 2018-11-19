#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int maxn=100000+100;
int h,m,s,t1,t2;
int know[maxn][4];
set<int> ss;
int main()
{
    ss.clear();
    memset(know,0,sizeof(know));
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int rt=0;
        for(int j=0;j<k;j++){
            scanf("%d",&know[i][j]);
            rt=rt*2+know[i][j];
        }
        if(rt==0){
            cout<<"YES"<<endl;
            return 0;
        }
        for(auto hh:ss){
            if((hh&rt)==0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        ss.insert(rt);
    }
    cout<<"NO"<<endl;
    return 0;
}
