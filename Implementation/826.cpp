#include<bits/stdc++.h>

using namespace std;
int n,t;
string s;
int main()
{
    cin >> n >> t >> s;
    for(int j=1;j<=t;j++){
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==66&&s[i+1]==71)
            {
                s[i]=71;s[i+1]=66;i++;
            }
    }
    }
    cout << s;
    return 0;
}
