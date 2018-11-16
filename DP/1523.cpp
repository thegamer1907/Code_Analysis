#include <bits/stdc++.h>

using namespace std;


string s  ;
int cnt;
int main()
{
    cin >>cnt ;
    char c ;
    for(int i=0;i<cnt;i++)
        cin>>c , s.push_back(c);
    int mx = -1, zzz;
    int ones = count(s.begin(), s.end() , '1');

    for(int i =0;i<s.size() ; i++)
        for(int j=i; j< s.size() ;j++)
    {
        int o=0, z=0;
        for(int k =i ; k <= j ;k++)
        {
        if(s[k] == '0')
            z++;
        else o++;
        }
         zzz = ones + z - o ;
        mx = max(mx , zzz);
    }
    mx = max(mx , zzz);
    cout << mx;
    return 0;
}
