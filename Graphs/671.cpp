#include<bits/stdc++.h>
#define mx 55

using namespace std;
string s;
int n,t;

int main()
{
    cin>>n>>t;
    cin>>s;

    while(t)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' and s[i+1]=='G' and (i+1)<n)
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
        t--;
    }
    cout<<s<<endl;
    return 0;
}
