#include<cstdio>
#include<cstring>
#include<queue>
#include<map>
#include<stack>
#include<iostream>
#include<algorithm>
#define LL long long
using namespace std;
const int MAX_N = 1e5+10;
const LL inf = 0x7fffffffffffffff;
string t[200];
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int i = 0;i < n;i++)
        cin>>t[i];
    int flag = 1;
    for(int i = 0;i < n&&flag;i++)
    {
        for(int j = 0;j < n&&flag;j++)
        {
            string tmp = t[i]+t[j];
            if(tmp.find(s)!=-1)
                flag = 0;
        }
    }
    if(flag)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
/*
*/
