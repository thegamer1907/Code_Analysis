#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    int t;
    char s1[100];
    cin>>n;
    cin>>t;
    cin>>s1;
while(t--)
{


    for( int i=0; s1[i+1]!='\0'; i++)
    {
        if(s1[i]=='B' && s1[i+1]=='G')
        {
            swap(s1[i],s1[i+1]);
            i=i+1;
        }

    }
}
     cout<<s1;
}
