#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k ;
    cin>>k ;
    string s ;
    cin>>s ;
    vector<int>v ;
    for(int i = 0 ; i < s.size() ; ++i)
    {
        if(i == 0)
            v.push_back(s[i] == '1');
        else
            v.push_back(v.back() + (s[i] == '1'));
    }
    long long ans = 0 ;
    for(int i = 0 ; i < s.size() ; ++i)
    {
        int idx = lower_bound(v.begin() , v.end() , v[i] + k + (s[i] == '0')) - v.begin();
        int idx1 = lower_bound(v.begin() , v.end() , v[i] + k - (s[i] == '1')) - v.begin();
        idx--;
        if(k == 0 && s[i] == '1')
          continue;
        idx = max(idx , i), idx1 = max(idx1 , i);
        ans += idx - idx1 + 1ll * 1ll ;
    }
    return cout<<ans , 0 ;
}
