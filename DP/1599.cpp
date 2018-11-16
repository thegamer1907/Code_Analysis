#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int i,j;
    cin>>s;
    s+=" ";
    int l=s.size();
    int AB=0,BA=0,p=0,q=0;
    for(i=0; i<l-2; i++)
    {
        char a=s.at(i);
        char b=s.at(i+1);
        if(a=='A' && b=='B')
        {
            if(s.at(i+2)=='A')
            {
                p=1;
            }
            AB++;
        }
        else if(a=='B' && b=='A')
        {
            if(s.at(i+2)=='B')
            {
                q=1;
            }
            BA++;
        }
    }
    if((BA>2 && AB>=1)|| (AB>2 && BA>=1))
    {
         cout<<"YES"<<endl;
    }
    else if((p==1 || q==1) && (AB==1 && BA==1))
    {
        cout<<"NO"<<endl;
    }
    else if((p==1 && q==1) && ((AB>1 && BA==1)|| (AB==1 && BA>1)))
    {
        cout<<"NO"<<endl;
    }
    else if(((p==0 && q==0) && (AB>1 && BA>=1))||((p==0 && q==0) && (AB>=1 && BA>1)) || (BA>1 && AB>1))
    {
        cout<<"YES"<<endl;
    }
    else if((p==1 || q==1)&&((AB>1 && BA==1)|| (AB==1 && BA>1)) ||(AB>1&&BA>1))
    {
        cout<<"YES"<<endl;
    }
    else if((p==0 && q==0)&&(AB==1 && BA==1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
