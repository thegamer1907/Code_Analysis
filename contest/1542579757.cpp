#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string pass;
    cin>>pass;
    int n;
    cin>>n;
    vector<string> v;
    while(n--){
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            string temp=(v[i]+v[j]);
            if(temp.find(pass)!=-1){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
