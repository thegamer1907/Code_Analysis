/** Bismillahir Rahmanir Raheem **/
/**
********************************************************************
******************* Author:Ashik Iqbal****************************
********************************************************************
**/
/**
Name : Ashik Iqbal.
Email: ashiqueiqbal998@gmail.com.
Computer Science and Engineering.
North South University.
Dhaka, Bangladesh.
**/

#include <bits/stdc++.h>
using namespace std;

/** templates starts here **/
#define ll long long int
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
#define stll stack<ll>
#define qll queue<ll>
#define pqll priority_queue<ll>
#define mpii map<int,int>
#define mpll map<ll,ll>
#define mpss map<string,string>
#define mpsi map<string,int>
#define mpis map<int,string>
#define mpsll map<string,ll>
#define mplls map<ll,string>
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<int>())
#define asrt(a) sort(a, a+n)
#define grtasrt(a) sort(a, a+n,greater<int>())
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
#define mem(a,x) memset(a,x,sizeof(a))
#define inf 0x3f3f3f3f
#define mx 100000000
const int mod=1e9+7;
/** templates ends here **/


int main ()
{

    fast;
    int n;
    string s1;
    cin>>s1;
    cin>>n;
    string s2[n], ans = "";
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>s2[i];
        if(s1 == s2[i])
        {
            cout<<"YES";
            return 0;
        }
    }
    bool flag = true;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<s2[i].size(); j++)
        {
            if(s2[i][1] == s1[0])
            {
                ans+=s2[i];
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    flag = true;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<s2[i].size(); j++)
        {
            if(s2[i][0] == s1[1])
            {
                ans+=s2[i];
                flag = false;
                break;

            }
        }
        if(!flag)
        {
            break;
        }
    }
    for(int i = 0; i<ans.size(); i++)
    {
        if(ans.substr(i, 2) == s1)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
