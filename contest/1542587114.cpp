#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char str[4];
    char ch[4];
    cin>>ch;
    cin>>n;
    int a=0,b=0;
    for(int i=0; i<n; i++)
    {
        scanf("%s",str);
        if(str[1]==ch[0])a=1;
        if(str[0]==ch[1])b=1;
        if(str[0]==ch[0]&&str[1]==ch[1])
        {
            a=1;
            b=1;
        }
        if(str[0]==ch[1]&&str[1]==ch[0])
        {
            a=1;
            b=1;
        }
    }
    if(a&&b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
