#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;  cin>>str;
    int n; cin>>n;
    string s[n]; int c1 = 0; int c2 = 0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i].compare(str)==0){
            cout<<"YES"; return 0;
        }
        if(s[i][1] == str[0]) c1++;
        if(s[i][0] == str[1]) c2++;
        if(c1 && c2){
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO";
}