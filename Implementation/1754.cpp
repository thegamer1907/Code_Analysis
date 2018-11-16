#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
    cin>>s;
    int temp=1;
    bool flag=false;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            temp++;
            if(temp==7)
            {
                flag=true;
                break;
            }
        }
        else
            temp=1;
    }
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}