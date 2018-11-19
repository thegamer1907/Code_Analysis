#include <bits/stdc++.h>
using namespace std;
typedef long long int ull;


int main()
{
    float h,m,s,t1,t2,f=0;
    cin>>h>>m>>s>>t1>>t2;
    float r=min(t1,t2);
    float q=max(t1,t2);
    float a=(float)m/5;
    float b=(float)s/5;
    if(m==0)
        a=12;
    if(s==0)
        b=12;
    if(m!=0 || s!=0)
        h+=0.1;
    if(s!=0)
        a+=0.01;

    priority_queue<float> qu;

    qu.push(h);
    qu.push(a);
    qu.push(b);
    qu.push(r);
    qu.push(q);

    //cout<<h<<" "<<a<<" "<<b<<" "<<r<<" "<<q<<endl;

    vector<float> u;

    while(!qu.empty())
    {
        float k=qu.top();
        u.push_back(k);
        qu.pop();
    }

    for(ull i=0;i<u.size()-1;i++)
    {
        //cout<<u[i]<<" "<<u[i+1]<<endl;
        if((u[i]==r && u[i+1]==q) || (u[i]==q && u[i+1]==r))
        {
            f=1;
            //break;
        }
    }

    if((u[0]==r && u[4]==q) || (u[0]==q && u[4]==r))
        f=1;
    if(f==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
