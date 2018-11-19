#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[200200][4],brr[200200];

int main()
{
    ll t,k,n,m,p,q,r,s;
    string str;
    char ch;
    double x,y;
    while(cin>>n>>k){
        map<string,int>mp;
        vector<string>vec;
        ll cnt=0,one=0,two=0;
        for(int i=0; i<n; i++){
            str="";
            for(int j=0; j<k; j++){
                cin>>ch;
                str+=ch;
            }
            if(mp[str]!=1) vec.pb(str);
            mp[str]=1;
        }
        //for(int i=0; i<vec.size(); i++) cout<<vec[i]<<endl;
        int chidori=0;
        for(int i=0; i<vec.size(); i++){
            for(int j=0; j<vec.size(); j++){
                int flag=0;
                for(int k=0; k<vec[i].size(); k++){
                    if(vec[i][k]=='1' && vec[j][k]=='1'){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){    //cout<<vec[i]<<"   "<<vec[j]<<endl;
                    chidori=1;
                    break;
                }
            }
            if(chidori==1) break;
        }

        if(chidori==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
