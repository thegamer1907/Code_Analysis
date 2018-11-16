#include <iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
int maxsum(vector<int> b)
{
    int cmax=b[0];
    int mx=b[0];
    for(int i=1;i<b.size();i++)
    {
        cmax=max(cmax+b[i],b[i]);
        mx=max(cmax,mx);
    }
    return mx;
}
int main() {
    int n,temp,cnt=0;
    cin >>n;
    vector <int> a,b;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        cnt+=temp;
        if(temp==1)
        b.push_back(-1);
        else if(temp==0)
        b.push_back(1);
    }
    cout<<cnt+maxsum(b);
    
}
