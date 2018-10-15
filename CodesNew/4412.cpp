#include<bits/stdc++.h>
using namespace std;

vector<string>v;

int main()
{
    //freopen("input.txt","r",stdin);
    int n,i,j;
    string str;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>str;
        v.push_back(str);
    }

    for(i=v.size()-2;i>=0;i--){
        if(v[i]<=v[i+1])continue;
        for(j=0;j<v[i+1].size();j++){
            //cout<<i<<' '<<j<<endl;
            if(v[i][j]!=v[i+1][j])break;
        }
        //j++;
        v[i]=v[i].substr(0,j);
    }
    for(i=0;i<v.size();i++)
        cout<<v[i]<<endl;

    return 0;
}
