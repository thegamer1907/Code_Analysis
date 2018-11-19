#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    char arr[209];
    int n,a=0,b=0;
    cin>>s>>n;
    for(int i=0;i<2*n;i+=2)
        cin>>arr[i]>>arr[i+1];
    if(n==1)
    {
        if((s[0]==arr[0]&&s[1]==arr[1])||(s[1]==arr[0]&&s[0]==arr[1]))
        {
            cout<<"YES";
            return 0;}
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    else
    {
        for(int i=0;i<2*n-1;++i)
        {
            if((arr[i]==s[0]&&arr[i+1]==s[1]))
            {
                cout<<"YES";
                return 0;
            }
            if((i%2==0)&&(arr[i]==s[1]))
                ++a;
            if(((i+1)%2==1)&&(arr[i+1]==s[0]))
                    ++b;
        }
    }
    if(a>0&&b>0)
        cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
