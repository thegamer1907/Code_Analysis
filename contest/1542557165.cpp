#include <bits/stdc++.h>
 
using namespace std;
 
const long long MOD=1e9+7;
const double PI=3.14159265359;

vector<bool> hasNum(16,0);

bool check(int mask){
    vector<int> nums;
    for(int m=mask, pos=0; m>0; m=(m>>1),pos++){
        if(m&1){
            if(!hasNum[pos]) return false;
            nums.push_back(pos);
        }
    }
    int n=nums.size();
    
    
    for(int i=1; i<16; i=(i<<1)){
        //cout<<"mask="<<mask<<endl;
        //cout<<"i="<<i<<endl;
        int ct=0;
        for(int j:nums){
            ct+=(bool)(j&i);
            //cout<<j<<" ";
        }
        //cout<<endl;
        //cout<<ct;
        //cout<<endl;
        if(2*ct>n) return false;
    }
    return true;
}


int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k;
    cin>>n>>k;
    
    
    for(int i=0; i<n; i++){
        int num=0, mult=1;
        for(int i=0; i<k; i++){
            int x;
            cin>>x;
            num+=x*mult;
            mult*=2;
        }
        hasNum[num]=true;
        
    }
    /*
    for(int i=0; i<16; i++){
        if(hasNum[i]) cout<<i<<endl;
    }*/
    
    
    for(int i=1; i<(1<<16); i++){
        if(check(i)){
            cout<<"yes";
            return 0;
        }
    }
    
    
    //check(6);
    
    cout<<"no";
    
    return 0;
    
}