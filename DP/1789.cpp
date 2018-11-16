#include <bits/stdc++.h>

using namespace std;

string ar[] = {"AB" , "BA"};

int main()
{
    string s;
    cin>>s;
    int a = 0 , b = 0;
    int la = 3 , lb = 3;
    int sz = s.size();
    s = " " + s;
    s = s + " ";
    for(int i = 1 ; i < s.size() ; i++)
    {
        if(ar[0] == s.substr(i , 2)){
            la = min(la , (s.substr(i-1,2)==ar[1])+ (s.substr(i+1,2)==ar[1]));
            a++;
        }
        else if(ar[1] == s.substr(i , 2))
        {
            lb = min(lb , (s.substr(i-1,2)==ar[0])+ (s.substr(i+1,2)==ar[0]));
            b++;
        }
    }

    if(a>0 && (b-la)>0)
    {
        cout<<"YES\n";
    }
    else if(b>0 && (a-lb)>0)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";

}
