#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
	int mx=-1;
    for(int i=0; i<n; i++)
    {

        for(int j=n-1; j>=i; j--)
        {
        int cnt=0;
            int segment=j-i;

            for(int k=0; k<n; k++)
            {
                if(k<i || k>j)
                {
                    if(a[k]==1)
                        cnt++;
                }
                else
                {
                    if(a[k]==0)
                        cnt++;
                }
            }
            mx=max(cnt,mx);

        }
    }
    cout<<mx<<endl;
}
