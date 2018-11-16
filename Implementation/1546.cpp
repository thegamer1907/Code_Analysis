#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,sum=1;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
            {sum++;
            if(sum==7)
            {
                cout<<"YES";
                break;
            }
            }
        else
            sum=1;
    }
    if(sum==1)
        cout<<"NO";

}
