#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    char a[3],b[3];
    cin>>a;
    int l=strlen(a);
    int d,f;
    d=122-a[0];
    f=122-a[1];
    //cout<<"ki";
    cin>>n;
    int flag=0,c1=0,c2=0;
    while(n--)
    {
        //cout<<"k";
        cin>>b;
        if(strcmp(a,b)==0)
           flag=1;
        else
        {
            if(d==122-b[1] && f!=122-b[0])
             {
                // cout<<"hi";
                c1=1;
             }
            else if(f==122-b[0] && d!=122-b[1])
            {
                //cout<<"h";
                c2=1;
            }
            else if(d==122-b[1] && f==122-b[0])
            {
                c1=1;
                c2=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else if(c1==1 && c2==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
