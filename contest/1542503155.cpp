#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n; string x,y;
    cin>>x>>n;
    int c=0,a=0;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        if(y[0]==x[1])
            c++;
        else if(y[1]==x[0])
            a++;
        if(y==x||y[1]==x[0]&&y[0]==x[1])
           {
               a++;
               c++;
           }
    }
    if(a>0&&c>0)
        cout<<"YES";
    else
        cout<<"NO";
    //system("pause")
    return 0;
}