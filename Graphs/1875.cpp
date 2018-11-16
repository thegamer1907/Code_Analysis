 #include <bits/stdc++.h>
using namespace std;
int main()
{
long long n,m,c=0,cnt=0;
cin>>n;
int a[n+1];
for(int i=0; i<n; i++)
{
	cin>>a[i];
}
sort(a,a+n);
cin>>m;
int b[m+1];
for(int j=0; j<m; j++)
{
	cin>>b[j];
}
sort(b,b+m);
for(int i=0; i<n; i++)
{
	for(int j=0; j<m; j++)
	{
		if(a[i]==b[j]-1 or a[i]==b[j] or a[i]==b[j]+1)
		{
		cnt++;
		b[j]=-1;
		a[i]=-5;	
		}
		
	}
}

/*
for(int i=0; i<n; i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0; i<m; i++)
{
	cout<<b[i]<<" ";
}
*/
cout<<cnt;
    return 0;
}
 
 
