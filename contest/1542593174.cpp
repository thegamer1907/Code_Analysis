#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char str[1000][2];
    char ch[2];
    cin>>ch;
    cin>>n;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        if(str[i][1]==ch[0])a=1;
        if(str[i][0]==ch[1])b = 1;
        if(str[i][0]==ch[0]&&str[i][1]==ch[1])a = 1,b = 1;
        if(str[i][0]==ch[1]&&str[i][1]==ch[0])a = 1,b = 1;
    }
    if(a&&b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}