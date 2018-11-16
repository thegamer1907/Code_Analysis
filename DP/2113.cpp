#include<iostream>

using namespace std;

int coun[100005]={0};

int main()
{
    int n,m,i,j,in[100005],ni,out[100005],dis=0;

    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>in[i];
        if(coun[in[i]]==0) dis++;
        coun[in[i]]++;
    }
    for(i=0;i<n;i++)
    {
        out[i]=dis;
        if(coun[in[i]]==1) {
                dis--;
        }
        if(coun[in[i]]>1) coun[in[i]]--;
    }
    for(i=0;i<m;i++){
        cin>>ni;
        cout<<out[ni-1]<<endl;
    }
}
