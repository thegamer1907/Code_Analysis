#include <bits/stdc++.h>
using namespace std;
int a[901],b[901];
int main () {
    int n,m,ind=0;
    cin>>n;
    int a[n+1];
    for (int i=0; i<n; i++)
      cin>>a[i];
    sort(a,a+n);
    cin>>m;
    int b[m+1];
    for (int i=0; i<m; i++)
        cin>>b[i];
    sort(b,b+m);
    
    for (int j=0; j<m; j++)
    {
    	for (int i=0; i<n; i++)
    	{
    		if (b[j]==a[i] or b[j]+1==a[i] or b[j]-1==a[i])
    		{
    		   ind++; b[j]=-50;	 a[i]=-100; break;
			}
		}
	}
	cout<<ind;
    
    
    
    return 0;
   
}
