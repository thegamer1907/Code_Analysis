#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define mod 1000000007

int main()
{
    FAST;
    int n,i,j;
    cin >> n;
    vector<string> v;
    string s,last,temp;

    for(i=0;i<n;i++)
    {
        cin >> s;
        v.push_back(s);
    }
    vector<string> ans;
    last=v[n-1];
    ans.push_back(last);
    for(i=(n-2);i>=0;i--)
    {
        //cout << last << endl;
        temp="";
        s=v[i];
        if(s<=last)
        {
            ans.push_back(s);
            last=s;
        }
        else
        {
            //cout << last << endl;
            for(j=0;j<last.size();j++)
            {
                if(last[j]!=s[j])
                {
                    j=last.size();
                }
                else
                {
                    temp+=s[j];
                }
            }
            ans.push_back(temp);
            last=temp;
        }
    }
    for(i=(n-1);i>=0;i--)
        cout << ans[i] << endl;
}

