#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,p,q=0;
    cin>>n>>k;
    int s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    p=s[k-1];
    for(i=0;i<n;i++)
    {
        if(s[i]>=p && s[i]!=0)
        {
            q++;
        }
    }
    cout<<q<<endl;
}
