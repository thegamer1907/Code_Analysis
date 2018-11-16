#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#define pb push_back
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    const int max=1e2;
    int n,x,y,z,count1=0,count2=0,count3=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        v1.pb(x);
        v2.pb(y);
        v3.pb(z);
    }
    for(int i=0;i<n;i++){
        count1+=v1[i];
        count2+=v2[i];
        count3+=v3[i];
    }
    if(count1==0 && count2==0 && count3==0)
           cout<<"YES";
    else
        cout<<"NO";
}