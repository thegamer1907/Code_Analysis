#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,x,y,sum=0,i,j,k,dif,m,n;
    vector<int>boy,girl;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>x;
        boy.push_back(x);
    }
    cin>>g;
    for(j=0;j<g;j++)
    {
        cin>>y;
        girl.push_back(y);
    }
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    if(b<=g)
    {
        for(k=0;k<b;k++)
        {
            for(m=0;m<g;m++)
            {
                dif=abs(boy[k]-girl[m]);
                if(dif<=1&&girl[m]!=0)
                {
                    girl[m]=0;
                    sum++;
                    break;
                }
            }
        }
    }
    else if(g<b)
    {
       for(k=0;k<b;k++)
        {
            for(m=0;m<g;m++)
            {
                dif=abs(boy[k]-girl[m]);
                if(dif<=1&&girl[m]!=0)
                {
                    girl[m]=0;
                    sum++;
                    break;
                }
            }
        }
    }
    cout<<sum<<endl;
}
