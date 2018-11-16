#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count1=0,count2=0;
    int a = s.length();
    for(int i=0;i<a;i++)
    {
        if(s[i]=='1')
        {
            count1++;
            if(s[i+1]=='0' && count1 < 7)
            {
                count1 = 0;
            }
        }
        if(s[i]=='0')
        {
            count2++;
            if(s[i+1]=='1' && count2 < 7)
            {
                count2 = 0;
            }
        }
    }
    if(count1>=7 || count2>=7)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
}
