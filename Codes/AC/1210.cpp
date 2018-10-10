#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int n,m,i,j,common=0,first=0,second=0;
    cin>>n>>m;
    string name[n],s;
    for(i=0;i<n;i++)
        cin>>name[i];
    for(i=0;i<m;i++)
    {
        cin>>s;
        for(j=0;j<n;j++)
        {
            if(s.compare(name[j])==0)
            {
                common++;
                break;
            }
        }
    }
    first=n-common;
    second=m-common;
    first=first+ceil(common/2.0);
    second=second+common/2;
    //cout<<first<<" "<<second<<endl;
    if(first>second)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
