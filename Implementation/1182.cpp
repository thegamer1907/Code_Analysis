#include<iostream>
#include<string> 
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<n-1;)
        {
            if(s[j]=='B'&&s[j+1]=='G')
                {
                    swap(s[j],s[j+1]);
                    j+=2;
                }
            else 
                j+=1;

        }
    }
    cout<<s<<"\n";

}