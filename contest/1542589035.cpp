#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;

int main()
{
    string a,b[105];
    cin>>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>b[i];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string c=b[i];
            c+=b[j];
            if(c.find(a)!=string::npos)
                flag=1;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
