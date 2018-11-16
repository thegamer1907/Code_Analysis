#include<iostream>

using namespace std;

int n,a,ans,k,b;

int main()
{
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;

        ans+=a;
        k+=1-a-a;

        if(k<0) k=0;
        if(b<k) b=k;
    }

    if(b==0) cout<<ans-1<<endl;
    else cout<<ans+b<<endl;

	return 0;
}
