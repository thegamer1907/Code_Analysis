#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100000];
    cin>>s;
    int l,x,y;
    l=strlen(s);
    int i,c=0,k=0;
    int rev=0,fwd=0;
     for(i=0;i<l-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B' )
            fwd++;
        else if(s[i]=='B' && s[i+1]=='A')
            rev++;
    }
    for(i=0;i<l-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && c==0)        //THEIR OCCURENCE SHOULD NOT OVERLAP
        {
            c=1;
            x=i;
        //    i++;
        }
         else if(s[i]=='B' && s[i+1]=='A' && k==0)
        {
            k=1;
            y=i;
           // i++;
        }
        if(c==1 && k==1 && abs(x-y)>=2)
        {
            cout<<"YES";
            return 0;
        }
        else if(abs(x-y)<2)
        {
            if(fwd>rev)
                c=0;
            else if(rev>fwd)
                k=0;
            else if(fwd == rev)
            {
                if(x<y)
                    k=0;
                else if(x>y)
                    c=0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
