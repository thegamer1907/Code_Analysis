#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int find_max_flip();

int main()
{
    bool b;
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(b)
        {
            sum++;
            v.push_back(-1);
        }
        else v.push_back(1);
    }
    if(sum==n) cout<<n-1<<endl;
    else if(sum==0) cout<<n<<endl;
    else cout<<sum+find_max_flip()<<endl;
}

int find_max_flip()
{
    vector<int>pre_sum;
    pre_sum.assign(v.size(),0);
    int ans=0;

    for(int i=1;i<pre_sum.size();i++)
    {
        pre_sum[i]=max(pre_sum[i-1]+v[i],v[i]);
        ans=max(ans,pre_sum[i]);
    }
    return ans;
}