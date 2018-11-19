#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p,s[102];
    cin>>p;
    char a=p[0],b=p[1];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
        int c=0,j;
    for(int i=0;i<n;i++)
    {
        if((s[i][0]==a)&&(s[i][1]==b))
            c++;
        for(j=0;j<n;j++)
        {
                if(((s[i][1]==a)&&(s[j][0]==b))|| ((s[i][0]==b)&&(s[j][1]==a)))
                    c++;
        }
    }
    if(c>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
