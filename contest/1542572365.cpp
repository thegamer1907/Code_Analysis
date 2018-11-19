#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,i,j;
	char s1[3];

	cin>>s1;
	cin>>n;
	string s2[n+1];
	for(i=0;i<n;i++)
	cin>>s2[i];
	ll c=0;
	for(i=0;i<n;i++)
    {
       // cout<<s1[0]<<" "<<s2[i][1]<<endl;
        if(((s1[0]==s2[i][0])&&(s1[1]==s2[i][1]))||((s1[0]==s2[i][1])&&(s1[1]==s2[i][0])))
        {
            c=1;
            break;
        }
        else if(s1[0]==s2[i][1])
        {

            for(j=0;j<n;j++)
            {
                if(s1[1]==s2[j][0])
                {
                    c=1;
                    break;
                }
            }
        }
    }
    if(c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
