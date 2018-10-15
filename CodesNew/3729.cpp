#include<bits/stdc++.h>

using namespace std;

int N[111],mx=0;

int main()
{

    /*ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    int n,m,sum=0;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>N[i];
        mx=max(mx,N[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=mx-N[i];
    }
    if(sum>=m)
    {
        cout<<mx<<" ";
    }
    else
    {
        sum=m-sum;
        cout<<mx+(sum/n)+(sum%n!=0)<<" ";
    }
    cout<<mx+m<<endl;
	return 0;
}
