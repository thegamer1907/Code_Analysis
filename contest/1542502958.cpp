#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,m,t;
    string a;

    cin>>a;
    cin>>n;
    vector<string> v;
    for(i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(v[i]==a)
            {
                flag++;
                break;
            }
    }
    if(flag>0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(v[i][1]==a[0])
        {
          //  cout<<i<<endl;
            for(j=0;j<n;j++)
            {
                if(v[j][0]==a[1])
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag>0)
            break;
    }
    if(flag>0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO";
return 0;
}
