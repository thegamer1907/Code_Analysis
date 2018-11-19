/**Chef and Dice - Codechef*/
/**Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,flag=0,flag2=0,flag3=0;
    cin>>n;
    string sub[n];
    for(int i=0;i<n;i++)
    {
        cin>>sub[i];
        if(sub[i][1]==s[0])
        {
            flag=1;
        }
        if(sub[i][0]==s[1])
        {
            flag2=1;
        }
        if(sub[i]==s)
        {
            flag3=1;
        }
    }
    if((flag==1&&flag2==1)||flag3==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
