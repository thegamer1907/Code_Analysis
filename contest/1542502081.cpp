
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s,ss;
    int n;

    cin>>s;
    cin>>n;
    string arr[n];
    bool f=false,e=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1&&arr[0]==s)
        cout<<"YES"<<endl;

else{
    for(int i=0;i<n;i++)
    {
        ss=arr[i];
        if(ss[0]==s[1])
            f=true;
        if(ss[1]==s[0])
            e=true;

            if(ss==s)
            {
                f=true;
                e=true;
            }
    }
    if(f==true&&e==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
    return 0;
}
