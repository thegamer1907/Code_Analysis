#include<bits/stdc++.h>
using namespace std;
vector<pair<double,string> >v;
int main()
{
    int n,i,j,k,l;
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)
        h=0;
    int sum=0;
    for(i=0;i<1000;i++)
        sum+=i;
    v.push_back({s*6,"S"});
    double mn=m*6+s*.1;
    v.push_back({mn,"M"});
    double hr=h*30+mn/30.0;
    v.push_back({hr,"H"});
    v.push_back({t1*30,"A"});
    v.push_back({t2*30,"A"});
    sort(v.begin(),v.end());
    for(i=1; i<5; i++)
    {
        if(v[i].second=="A")
        {
            if(v[i-1].second=="A")
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    if(v[4].second=="A")
        {
            if(v[0].second=="A")
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }

        cout<<"NO"<<endl;
}



