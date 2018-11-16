#include<bits/stdc++.h>
using namespace std;
void swap(char &a, char &b)
{
    char temp = a;
    a=b;
    b=temp;
}

int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<s.length()-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
