#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,input,count=0;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    if(v[k-1]==0)
    {
        for(int i=0;i<k;i++)
        {
            if(v[i]==0)
            break;
            count++;
        }
    }
    else{
        count=k;
        for(int i=k;i<n;i++)
        {
            if(v[i]==v[k-1])
            count++;
            else{
                break;
            }
        }
    }
    cout<<count<<endl;
}