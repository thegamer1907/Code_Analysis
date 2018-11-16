                          //Problem - B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int m;
    cin>>m;
    map<int,int>mp;
    map<int,int>::iterator itr;
    for(i=0;i<m;i++){
        cin>>x;
        mp[x]++;
    }
    int c=0;
    for(i=0;i<n;i++){
        for(itr = mp.begin();itr!=mp.end();++itr){
            if(abs(itr->first - a[i])<=1 &&itr->second>0){
                  //cout<<"i "<<i<<"itr "<<itr->first<<"\n";
                  itr->second-= 1;
                  c++;
                  break;
            }
        }
    }
    cout<<c<<"\n";
    return 0;
}
