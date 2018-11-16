#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int n=s.length();
    int start=0;
    int end=6;
    int sum=0;
    for(int i=0;i<=6;i++)
        sum+=s[i]-'0';
    
    if(sum==7||sum==0){
        cout<<"YES";
        return 0;
    }

    while(end<n-1){
        end++;
        sum+=s[end]-'0';
        sum-=s[start]-'0';
        start++;
        if(sum==7||sum==0){
            cout<<"YES";
            return 0 ;
        }
    }
    cout<<"NO";

}