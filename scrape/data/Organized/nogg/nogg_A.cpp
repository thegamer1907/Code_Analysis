#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<map>
#include<vector>
#include<stack>
#include<set>
#include<queue>
using namespace std;

int main(){
    long long n,m,k;
    long long x;
    cin>>n>>m>>k;
    long long count2=0;long long count1=0;
    long long ans=0;
    long long cur=-1;
    for(int i=0;i<m;i++){
        cin>>x;
        if(x-count2<=cur){
            count1++;
        }
        else{count2=count1;
            cur=((x-count2-1)/k+1)*k;
            ans++;

            count1++;
        }
    }
   /* map<long long,long long>::iterator p=mp.begin();
    long long count1=0,count2=0;
    long long ans=0;
    while(p!=mp.end()){
            ans++;
       int t=(p->second-count2-1)/k+1)*k;
    while(p->second-count2<=((t-count2-1)/k+1)*k){
        count1++;
        p++;
    }
    count2=count1;
    }*/
    cout<<ans<<endl;
return 0;
}