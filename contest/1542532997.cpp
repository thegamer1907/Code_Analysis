/**
 *    SATAR ALLAH
 *
**/
#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()

int main()
{

    string str;

    cin>>str;

    int n;

    cin>>n;
    bool flag1=false,flag2=false;
    while(n--){


         string s;

         cin>>s;
         string k=s;
         reverse(all(k));
         if(s==str||k==str)
            return cout<<"YES",0;
         flag1|= (s[0]==str[1]);
         flag2|= (s[1]==str[0]);
    }

    if(flag1&&flag2)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
