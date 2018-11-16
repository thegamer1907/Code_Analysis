#include<iostream>
using namespace std;

int main()
{
    int n,t,temp;
    cin>>n>>t;
    string s;
    cin>>s;
    
    for(int i=1;i<=t;i++)
    {
        temp=n;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B')
            temp=j;
            if(s[j]=='G' && temp<j){
                swap(s[temp],s[j]);
                temp=n;
            }
        }
    }
    cout<<s;
    
    return 0;
}