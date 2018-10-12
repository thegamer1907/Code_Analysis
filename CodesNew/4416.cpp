#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
string a[500050];
int tmp[500050];
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
        }
        for(int i=n-1; i>0; --i)
        {
            if(a[i-1]>a[i])
            {
                for(int j=0; j<a[i-1].length(); ++j)
                {
                    if(a[i-1][j]>a[i][j])
                    {
                        tmp[i]=j;
                        break;
                    }
                }
                string aa;
                for(int j=0; j<tmp[i]; ++j)
                {
                    aa+=a[i-1][j];
                }
                a[i-1]=aa;
            }
        }
        for(int i=0; i<n; ++i)
            cout<<a[i]<<endl;
    }
}
