#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int count=1;
    for(int i=0;i<len;i++)
    {
        if(str[i]==str[i-1])
        {
            count++;
        if(count==7)
        {
               cout<<"YES"<<endl;
            return 0;
        }
        }
        else
            count=1;

    }
    cout<<"NO"<<endl;
    return 0;
}
