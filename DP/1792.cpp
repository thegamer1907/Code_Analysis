#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define ll long long
const int mod = 1e9+7;

using namespace std;
int main()
{
    string a="AB";
    string b="BA";
    string s;
    cin>>s;
    if(s.size()<4)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int loa_ab[100005];
    int cnt1=0,cnt2=0;
    int loa_ba[100005];
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            loa_ab[cnt1++]=i;
        }
        else if(s[i]=='B'&&s[i+1]=='A')
        {
            loa_ba[cnt2++]=i;
        }
    }
    if(cnt1>0&&cnt2>0)
    {
        if(loa_ba[cnt2-1]-loa_ab[0]>=2||loa_ab[cnt1-1]-loa_ba[0]>=2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;



    return 0;
}