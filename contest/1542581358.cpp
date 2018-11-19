//Jai Shree Krishna
#include <bits/stdc++.h>
#define ll long long int
using namespace  std;

//One More Time
//Just Do it Dude

int n,k;
bool check(string a,string b)
{
    for (int i = 0 ; i<k; i+=1) {
        if(a[i]=='1' and b[i]=='1')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("a.in", "r", stdin)
    
    cin>>n>>k;
    map<string,int>m1;
    for (int i = 0 ; i<n; i+=1) {
        string s = "";
        for (int j = 0 ; j<k; j+=1) {
            char c;
            cin>>c;
            s+=c;
        }
        m1[s] = 1;
    }
    
    vector<pair<string, int> >v1;
    for (auto itr : m1) {
        v1.push_back({itr.first,itr.second});
       // cout<<itr.first<<" "<<itr.second<<endl;
    }
    string cool = "";
    for (int i = 0 ; i<k; i+=1) {
        cool+="0";
    }
    if(m1[cool])
    {
        cout<<"YES";
        return 0;
    }
    
    
    for (int i =0 ; i<v1.size(); i+=1) {
        for (int j = i+1; j<v1.size(); j+=1) {
            if(check(v1[i].first, v1[j].first))
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    
    
    
    return 0;
}

