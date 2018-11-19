#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
const int MOD=1e9+7;

string s;
string str[110];
int n;

int main()
{
    cin>>s>>n;
    for (int i=1;i<=n;i++)
        cin>>str[i];
    bool flag=false;
    //bool flag2=false;
    for (int i=1;i<=n;i++) {
        if (str[i][0]==s[0]) {
            if (str[i][1]==s[1]) {
                flag=true;
                break;
            }
        }
    }
    for (int i=1;i<=n;i++) {
        if (str[i][1]==s[0]) {
            bool flag1=false;
            for (int i=1;i<=n;i++) {
                if (str[i][0]==s[1]) {
                    flag1=true;
                    break;
                }
            }
            if (flag1)  {
                flag=true;
                break;
            }
        }
    }
    if (flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
