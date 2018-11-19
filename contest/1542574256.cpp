
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int S;
    if(m==1){
        S=1;
    }
    if(m==2)
        S=3;
    if(m==3)
        S=7;
    if(m==4)
        S=15;
    set<int> s;
    for(int i=1;i<=n;++i){
        int t=0;
        int a;
        for(int j=m;j>=1;--j){
            cin>>a;
            if(a==1)
                t+=pow(2,j-1);
        }
        if(t==0){
            cout<<"YES"<<endl;
            return 0;
        }
     //   cout<<t<<endl;
        s.insert(t);
    }
    set<int>::iterator it;
    set<int>::iterator it2;
    bool flag=false;
    for(it=s.begin();it!=s.end();++it){
        //cout<<S<<" "<<*it<<endl;
        int t2=S^(*it);
        //cout<<t2<<endl;
        for(it2=s.begin();it2!=s.end();++it2){
            if(t2==(*it2)||((t2&(*it2))==(*it2))){
               // cout<<t2<<" "<<*it2<<endl;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
