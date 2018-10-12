#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,m,n,mid,midi;
vector<int> v;
int main()
{
    cin>>n;
    v.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    mid=n/2;
    midi=mid;
    for(i=0;i<mid;i++)
    {
        while(1)
        {
            if(midi==n)
                break;
            if(2*v[i]<=v[midi])
            {
                k++;
                midi++;
                break;
            }
            midi++;

      }

    }
    cout<<n-k<<endl;
    return 0;
}
