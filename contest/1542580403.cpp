#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll t,k,n,m,p,q,r,s;
    string str;
    double x,y;
    map<string,int>mp;
    while(cin>>str>>n){
        string arr[n+5];
        ll cnt=0,chidori=0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==str){
                chidori=1;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                //cout<<arr[i][1]<<endl;
                string temp;
                temp+=arr[i][1];
                temp+=arr[j][0];
                if(temp==str){
                    chidori=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                string temp;
                temp+=arr[j][1];
                temp+=arr[i][0];
                if(temp==str){
                    chidori=1;
                }
            }
        }
        if(chidori==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
