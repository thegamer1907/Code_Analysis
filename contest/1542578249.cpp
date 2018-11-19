#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#include <map>
#include <algorithm>
#include <math.h>
#include <iostream>     // std::cout, std::fixed
#include <iomanip>
#include<queue>
#include <cmath>
#include <queue>
#include <cmath>
#include <set>
#include <iostream>


using namespace std;
typedef long long ll;
bool ok(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
        if(arr[i]>1)
            return false;
    return true;
}
int main () {
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string s="";
        for(int j=0;j<k;j++)
        {
            int x;
            cin>>x;
            s+=(x+'0');
        }
        mp[s]++;
        
    }
    //chak 0000
    string zeros="";
    for(int i=0;i<k;i++)
        zeros+="0";
    if(mp.find(zeros)!=mp.end())
    {
        cout<<"YES";
        return 0;
    }
    
    for(auto s1: mp)
        for(auto s2 : mp)
        {
            if(s1.first==s2.first)
                continue;
            vector<int> res;
            for(int l=0;l<s1.first.size();l++)
            {
                int x=s1.first[l]+s2.first[l]-2*'0';
                res.push_back(x);
            }
            if(ok(res))
            {
                cout<<"YES";
                return 0;
            }
        }
    
    cout<<"NO";
    return 0;
}
