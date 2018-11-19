#include<bits/stdc++.h>
using namespace std;
//map<int,int> mp;

int main()
{
    int a[110],b,i,j,n,c,d,a1,k;
    char s[110],pass[20],ans[110];
    while(cin>>pass)
    {
        cin>>n;
        j=0;
        bool f=false,g=false;
       /* if(n==1)
        {
            cin>>s;
            if((s[0]==pass[1]&&s[1]==pass[0])||(s[0]==pass[0]&&s[1]==pass[1]))
                cout<<"YES\n";
        }*/
        //cout<<pass[0]<<" "<<pass[1]<<endl;
        //else
        //{
            for(i=0; i<n; i++)
            {
                cin>>s;
                if(s[1]==pass[0])
                {
                    ans[j++]=s[1];
                    f=true;
                }
                if(s[0]==pass[1])
                {
                    ans[j++]=s[0];
                    g=true;
                }
                if(s[0]==pass[0]&&s[1]==pass[1])
                {
                    g=true;
                    f=true;
                }
            }
            if(g==true && f==true)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";
        //}

    }
    return 0;
}
