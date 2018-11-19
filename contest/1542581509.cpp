#include<bits/stdc++.h>
using namespace std;
int dp[234][12][4567];
void gao(int x, char tmp[])
{
	int len = strlen(tmp);
	for (int i=0;i<=11;i++){
		for (int j=0;j<(1 <<(i+1));j++){
			for (int k=0;i+k<len;k++){
				int flag=0;
				for (int h=0; h<=i;h++){
					if (((j>>h)&1)!=tmp[k + h]-'0'){
						flag=1; break;
					}
				}
				if (!flag){dp[x][i][j]=1;break;}
			}
		}
	}
}
int n,q; char s[123][123];
int len[233];
char tmp1[233][15],tmp2[234][20],tmp3[45];
int main()
{
  	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%s", s[i]);
		gao(i, s[i]);
		int length=strlen(s[i]);len[i]=length;
		if (len[i]>=13){ len[i]=14;}
		for (int j=0;j<len[i];j++){
			tmp1[i][j] = s[i][j]; 
			tmp2[i][j] = s[i][length - len[i] + j];
		}
	}
	cin>>q;
	int a, b;
	for (int i=n;i<n+q;i++)
	{	
		cin>>a>>b;
		--a;--b;
		for (int j=0;j<=11;j++){
			for (int k=0; k<(1<<(j+1));k++){
				dp[i][j][k]=dp[a][j][k]|dp[b][j][k];
			}
		}
		for (int j=0;j<len[a];j++){
			tmp3[j]=tmp2[a][j];
		}
		for (int j=0; j<len[b];j++){
			tmp3[j+len[a]]=tmp1[b][j];
		}
		tmp3[len[a]+len[b]]=0;
		gao(i, tmp3);
		len[i] = len[a] + len[b];
		if (len[i]>=13)len[i]=14;
		for (int j=0;j<len[a];j++)
		{
			tmp1[i][j]=tmp1[a][j];
		}
		for (int j=0;j+len[a]<len[i];j++)
		{
			tmp1[i][j+len[a]]=tmp1[b][j];
		}
		for (int j=0;j<len[b];j++)
		{
			tmp2[i][j+len[i]-len[b]]=tmp2[b][j];
		}
		for (int j=0;j+len[b]<len[i];j++){
			tmp2[i][j]=tmp2[a][j+len[a]+len[b]-len[i]];
		}
		int ans=12;
		for (int j=0;j<=11;j++){
			int flag=0;
			for (int k=0; k<(1 <<(j + 1));k++){
				if (dp[i][j][k]==0){flag=1;break;}
			}
			if (flag){ans=j;break;}
		}
		cout<<ans<<endl;
	}
    return 0;
}