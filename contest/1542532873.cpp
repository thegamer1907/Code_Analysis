#include<bits/stdc++.h>
using namespace std;
#define N 105
string a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string p;
    int n,i,j;
    cin>>p>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==p){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            string x="";
            x=x+a[i][1];
            x=x+a[j][0];
            //cout<<"possible "<<x<<endl;
            if(x==p){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
