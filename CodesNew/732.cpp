#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,int>map1,map2,map3;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        map1.insert({str,1});
    }
    for(int i=0;i<m;i++)
    {
        string str;
        cin>>str;
        if(map1.find(str)!=map1.end()) {
            map3.insert({str,1});
            map1.erase(map1.find(str));
        }
        else
        map2.insert({str,1});
    }
    
    /*for(auto it=map1.begin();it!=map1.end();it++) cout<<it->first<<" "<<it->second<<endl;
    cout<<"shanu"<<endl;
    for(auto it=map2.begin();it!=map2.end();it++) cout<<it->first<<" "<<it->second<<endl;
    cout<<"shanu"<<endl;
    for(auto it=map3.begin();it!=map3.end();it++) cout<<it->first<<" "<<it->second<<endl;
    cout<<"shanu"<<endl;
    */
    int counter=0;
    int ptr = map3.size()/2+(map3.size()%2);
    int pptr=map3.size()-ptr;
    ptr+=map1.size();
    pptr+=map2.size();
    if(ptr>pptr) cout<<"YES";
    else cout<<"NO";
}