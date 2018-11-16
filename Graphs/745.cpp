#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
    int a,b;
    cin>>a>>b;

    cin>>s;

    for(int i=1;i<=b;i++)
    {
        for(int j=0;j<a;j++)
            if(s[j]=='B' and s[j+1]=='G'){
                swap(s[j],s[j+1]);
          j++;
            }
    }
    cout<<s;

}
