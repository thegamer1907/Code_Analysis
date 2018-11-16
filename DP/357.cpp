#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>boy;
    vector<int>girl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        boy.push_back(a);
    }

    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        girl.push_back(a);
    }

    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());

    int i=0,count=0;

    for(;i<boy.size();i++){
        for(int j=0;j<girl.size();j++){
            int a=boy[i]-girl[j];
            if(a<0)a*=(-1);
            if(a<=1){
                count++;
                //cout<<*(girl.begin()+(j))<<endl;
                girl.erase(girl.begin()+(j));
                break;
            }
        }
    }

    cout<<count<<endl;

}
