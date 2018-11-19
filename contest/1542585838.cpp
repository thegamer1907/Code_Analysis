#include<iostream>
using namespace std;
#include<cstdio>
#include<cstring>
int main()
{
    char in[3],out[3];
    cin>>in;

    int c1=0,c2=0,n;
    cin>>n;
    if(n==0)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>out;
        if(!strcmp(in,out))
        {
            c1=1;
            c2=1;

        }
        if(out[1]==in[0])
        c1=1;
        if(out[0]==in[1])
        c2=1;

    }
    if(c1&&c2)
        {
            cout<<"YES";
            return 0;
        }
    cout<<"NO";
    cin>>n;
    return 0;
}
