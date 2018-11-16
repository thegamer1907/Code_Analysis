#include<iostream>

using namespace std;

int main()
    {
    char s[50],temp;
    int n,t;
    cin>>n>>t;
    cin>>s;
    while(t!=0)
        {
            for(int i=0;i<n;i++)
            {
            if(s[i+1]!='\0')
                {
                if(s[i]=='B'&&s[i+1]=='G')
                    {
                    temp=s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    i++;
                    }
                }
            }
            t--;
        }
    cout<<s;

    return 0;
    }
