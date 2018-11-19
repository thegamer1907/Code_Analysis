#include <bits/stdc++.h>

using namespace std;

#define int long long

main()
{
   string s;
   cin>>s;
   int n;
   cin>>n;
    vector<string> a(n);
    int z=0;
   for(int i=0;i<n;i++)
        {cin>>a[i];
            if(a[i]==s)
            {
                cout<<"YES";
                z=1;
            }
        }
    if(z==1)
        return 0;
   for(int i=0;i<n;i++)
   {
       string s1=a[i]+a[i];
       if(s1[1]==s[0] && s1[2]==s[1])
       {
           cout<<"YES";
           return 0;
       }
       for(int j=0;j<n;j++)
       {
           if(i==j)
            continue;
            string b=a[i]+a[j];
            if(b[1]==s[0] && b[2]==s[1])
       {
           cout<<"YES";
           return 0;
       }
       b=a[j]+a[i];
       if(b[1]==s[0] && b[2]==s[1])
       {
           cout<<"YES";
           return 0;
       }
       }
   }
   cout<<"NO";

    return 0;
}
