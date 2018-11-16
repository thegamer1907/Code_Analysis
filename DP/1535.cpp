#include<iostream>
#include<cstring>
const int MAX=101;
int s[MAX];
using namespace std;
int main()
{
    int n,m,i,q,p;
    cin>>n;
    p=0;
    m=0;
    q=-1;
    for(i=1; i<=n; i++)
    {
        cin>>s[i];
        if(s[i]==1)
        {
            p=max(p-1,-1);
            m++;
        }
        else if(s[i]==0)
        {
            p=max(p+1,1);
        }
        q=max(q,p);
    }
    cout<<q+m<<endl;
    return 0;
}
