#include<bits/stdc++.h>
using namespace std;

int a[10010];
int f,g,h,k;
void find(int x)
{
	if(f==k)return;
	else {
		int sum=0;
		int v=x;
		while(v)
		{
			sum+=v%10;
			v/=10;
		}
		if(sum==10){
			f++;
			a[f]=x;
		}
		find(x+1);
	}
}
int main()
{
	cin>>k;
	find(1);
	cout<<a[k];
}