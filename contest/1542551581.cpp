
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main()
{
    int n;
    bool x=false,y=false,z=false;
    char ch[1000],c1[1000][1000];
    gets(ch);

    cin >>n;

     for(int i=0; i<n; i++)
    {
        cin >>c1[i];
        if(c1[i][0]==ch[0]&&c1[i][1]==ch[1])
        {
            z=true;
        }

    }
    if(z)
    {
        cout <<"YES"<<endl;
        return 0;
    }
    else
    {
        for(int i=0; i<n; i++)
       {
           if(c1[i][0]==ch[1])x=true;
          if(c1[i][1]==ch[0])y=true;
       }

    }

    if(x&&y)cout <<"YES"<<endl;
    else cout <<"NO"<<endl;

return 0;
}
