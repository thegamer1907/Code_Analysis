#include<iostream>
using namespace std;




int main()
{
    int n;
    int t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--)
    {
        int i;
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
}
