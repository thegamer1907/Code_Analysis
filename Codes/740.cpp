#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;cin>>k;
    vector<int> v{9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i = 1,s=10 ; i < k ; i ++){
        for(int j = 0 ; true ; j ++){
            if(v[j]>0){
                s-=v[j]-1;
                v[j]=0;
                v[j+1]++;
                if(v[j+1]>9){
                    s-=9;
                    v[j+1]=0;
                    v[j+2]++;
                }
                break;
            }
        }
        v[0]=10-s;
        s=10;
    }
    for(int j = v.size()-1 ; j>= 0 ; j--){
        if(v[j])break;
        v.resize(v.size()-1);
    }
    for(int j = v.size()-1 ; j>= 0 ; j--)cout<<v[j];
}
