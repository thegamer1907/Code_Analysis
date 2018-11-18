#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
	int n,i,flag=0;
	char A[115][3];
	char key[3];
	scanf("%s",key);
	cin>>n;
	for(i=0;i<n;++i)
	{
		scanf("%s",A[i]);
		if(strcmp(A[i],key)==0)
		{
			cout<<"YES";
			return 0;
		}
	}
	for(i=0;i<n;++i)
		if(A[i][1]==key[0]) flag=1;
	for(i=0;i<n;++i)
		if(A[i][0]==key[1]&&flag==1) flag=2;
	if(flag==2) cout<<"YES";
	else cout<<"NO";
	return 0;
}