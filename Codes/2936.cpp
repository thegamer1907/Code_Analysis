#include<bits/stdc++.h>
using namespace std;
#define piii pair<int,pair<int,int> >
#define pii pair<int,int>
#define ll long long
int a[1000005];
int main(){
    ios::sync_with_stdio(false);
    //cin.tie(NULL);
    string s;
    cin>>s;
    int i=1;
    int n=s.length();
    int l=0;
    a[0]=0;
    i=1;
    while(i<n){
        if(s[i]==s[l]){
            l++;
            a[i]=l;
            //cout<<i<<' '<<a[i]<<'\n';
            i++;
        }
        else{
            if(l!=0){
                l=a[l-1];
            }
            else{
                a[i]=0;
              //  cout<<i<<' '<<a[i]<<'\n';
                i++;
            }
        }
    }
    if(a[n-1]==0){
        cout<<"Just a legend";
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==a[n-1]){
            cout<<s.substr(0,a[i]);
            return 0;
        }
    }
    if(a[a[n-1]-1]==0){
        cout<<"Just a legend";
        return 0;
    }
    cout<<s.substr(0,a[a[n-1]-1]);
    return 0;
}
/*
2
2 3
*/
