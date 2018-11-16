#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int m=0,n=0,i,flag=0;

    cin>>a;

    for(i=0;i<a.length();i++)
    {
        if(a[i]=='0')
        {
            m++;
            n=0;
            if(m>=7)
            {
                flag++;
            }
        }
        else
        {
            n++;
            m=0;
            if(n>=7)
            {
                flag++;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
