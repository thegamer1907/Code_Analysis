#include <iostream>
#include<string>
#include<locale>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{int m=0,k=0;
    string y;
cin>>y;
    string x[100];
int n;
cin>>n;

for(int i=0;i<n;i++)
    cin>>x[i];
    for(int i=0;i<n;i++)
    if(x[i]==y)
    {
        cout<<"YES";
        return 0;
    }
    for(int i=0;i<n;i++)
    if(x[i][0]==y[1])
    {
        m=1;break;
    }
    for(int i=0;i<n;i++)
    if(x[i][1]==y[0])
    {
        k=1;break;
    }
    if(m==1&&k==1)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
        return 0;

}
