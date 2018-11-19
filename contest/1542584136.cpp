#include<bits/stdc++.h>
using namespace std;
long long int const mod=1000000007;
int main()
 {int i;
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e,first,second;

cin>>a>>b>>c>>d>>e;
if(d<e)
   {first=d;
    second=e;}
    else
    {first=e;
    second=d;

    }
    if(b<5)
        b=12;
    else
        b/=5;
         if(c<5)
        c=12;
    else
        c/=5;

    if(((first<=a&&a<second)&&(first<=b&&b<second)&&(first<=c&&c<second))||((!(first<=a&&a<second))&&(!(first<=b&&b<second))&&(!(first<=c&&c<second))) )
cout<<"YES";
else
    cout<<"NO";

}



