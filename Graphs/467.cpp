#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
    int n, t, p;
    string str;
    cin>>n>>t>>str;
    for(int i=0;i<t;i++)
    {
        p=0;
        while(p<n-1)
        {
            if(str[p]<str[p+1])
            {
                swap(str[p], str[p+1]);
                p+=2;
            }
            else
                p++;
        }
    }
    cout<<str<<endl;
    return 0;
}
