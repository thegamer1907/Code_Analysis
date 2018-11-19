#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1e3 + 9;
const int MOD = 998244353;
char vec[MAX_N];
char s[MAX_N];
int N,M,x;
int main()
{
    scanf("%s",vec);
    cin>>N;
    bool flag = false;
    bool a=false,b=false;

    for(int i=0;i<N;i++)
    {
        scanf("%s",s);
        if(vec[0] == s[0] && vec[1] == s[1]) flag = true;
        if(vec[0] == s[1]) a = true;
        if(vec[1] == s[0]) b = true;
    }
    if(flag || (a&&b)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
