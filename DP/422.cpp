#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+m);
	int count=0;
	

	for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(a[i]-b[j])<=1){
                count++;
                b[j]=10000;
                break;
            }
        }
    }
	printf("%d",count);
}