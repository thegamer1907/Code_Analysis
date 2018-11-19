#include<bits/stdc++.h>
using namespace std;
char s[1000][2];
int main()
{
    //cin.tie(0);ios_base::sync_with_stdio(false);
    scanf("%s",s[0]);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%s",s[i]);
    int f=0,g=0,h=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i][0]==s[0][0]&&s[i][1]==s[0][1])f=1;
        if(s[i][1]==s[0][0])g=1;
        if(s[i][0]==s[0][1])h=1;
    }
    if(f||(g&&h))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}