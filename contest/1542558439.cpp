#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 ,s2 ,s3="";
    cin>>s1;
    int n;
    bool tst1=false ,tst2=false;
    cin>>n;
    while(n--)
    {
        cin>>s2;
        s3=s2;
        reverse(s3.begin() ,s3.end());
      if (s2[1]==s1[0])
        tst1=true;
      if (s2[0]==s1[1])
      tst2=true;
      if ( (tst1 && tst2) || (s1==s2) || (s1==s3) ){ cout<<"YES" ; return 0 ;}

    }
    cout<<"NO";

    return 0;
}