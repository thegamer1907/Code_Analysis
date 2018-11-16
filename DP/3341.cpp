#include <bits/stdc++.h>
using namespace std;
const int MAXN=1000000;
int n,z[MAXN+5];
char input[MAXN+5];
void buildZ(){
	int l,r;
	l=r=0;
	z[0]=n;
	for(int i=1;i<n;i++)
	{
		if(r<i)				//basically di hitung ulang
		{
			l=r=i;
			while(r<n&&input[r]==input[r-i])
				r++;
			r--;
			z[i]=r-i+1;
		}
		else
		{
			if(z[i-l]!=(r-i+1))
			{
				z[i]=min(z[i-l],r-i+1);
			}
			else
			{
				l=i;
				while(r<n&&input[r]==input[r-i])
					r++;
				r--;
				z[i]=r-i+1;
			}
		}
	}
}
bool med[MAXN+5],last[MAXN+5];
int main()
{
	memset(med,false,sizeof(med));
	memset(last,false,sizeof(last));
	cin>>input;
	n=strlen(input);
	buildZ();
	
	for(int i=1;i<n;i++)
	{
		if(i+z[i]-1==n-1)
		{
			last[z[i]]=true;
			med[z[i]-1]=true;
		}
		else
			med[z[i]]=true;
	}
	int ans=0;
	for(int i=n;i>=1;i--)
	{
		med[i]=med[i]||med[i+1];
		if(med[i]&&last[i])
		{
			ans=i;
			break;
		}
	}
	if(ans==0)
		cout<<"Just a legend"<<endl;
	else
	{
		input[ans]='\0';
		cout<<input<<endl;
	}
}