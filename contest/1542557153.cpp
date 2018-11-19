
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int i,j,n,fl=0;
    scanf("%d",&n);
    vector<string>v;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        if(s.compare(st)==0)
        fl=1;
        else if(s[1]==st[0]&&s[0]==st[1])
        fl=1;
    }

    if(fl!=1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i!=j)&&(v[i][1]==st[0] && v[j][0]==st[1]))
                {
                    fl=1;
                    break;
                }
            }
        }
    }
    if(fl==1)
    printf("YES\n");
    else
    printf("NO\n");
}
