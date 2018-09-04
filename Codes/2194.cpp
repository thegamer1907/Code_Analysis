#include<bits/stdc++.h>
using namespace std;

long long int val[200001];

int main(){
    long int n;
    cin>> n;
    for(long int i=1;i<=n;++i)
        cin>> val[i];
    long long int s1=0,s2=0;
    long int i=0,j=n+1;
    long long int ans=0;
    while(i<j){
        if(s1==s2){
            ans=max(ans,s1);
            i++;
            s1+=val[i];
            continue;
        }
        if(i==j-1)
            break;
        if(s1>s2){
            j--;
            s2+=val[j];
        }
        else if(s1<s2){
            i++;
            s1+=val[i];
        }
    }
    cout<< ans;
    return 0;
}
