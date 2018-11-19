#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <queue>
#include <set>

using namespace std;

int main(void)
{
    string key;
    string s[101];
    cin>>key;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        if(key==s[i])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i][1]==key[0] && s[j][0]==key[1])
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
