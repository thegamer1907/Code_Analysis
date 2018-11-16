#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,c=0;
cin>>n;
map<int,int>boys,girls;
map<int,int>::iterator it;
for(int i=0;i<n;++i){
    cin>>m;
    boys[m]+=1;
}
cin>>n;
for(int i=0;i<n;++i){
    cin>>m;
    girls[m]+=1;
}
for(it=boys.begin();it!=boys.end();++it){
        int num=it->second;
    while(num--){
        if(girls[it->first-1] &&girls[it->first-1]>0){c+=1;girls[it->first-1]-=1;}
    else if(girls[it->first] &&girls[it->first]>0){c+=1;girls[it->first]-=1;}
    else if(girls[it->first+1] &&girls[it->first+1]>0){c+=1;girls[it->first+1]-=1;}
    }

}
cout<<c<<endl;
return 0;
}
