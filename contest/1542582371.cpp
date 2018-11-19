#include<bits/stdc++.h>
using namespace std;
string cari,kode[105];
int n;
int main()
{
	cin >> cari;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin >> kode[i];
	}
	bool cek=0;
	for(int i=1;i<=n;i++)
	{
		if(kode[i]==cari)
		{
			cek=1;
			break;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(kode[i][1]==cari[0])
		{
			for(int j=1;j<=n;j++)
			{
				if(kode[j][0]==cari[1])
				{
					cek=1;
					break;
				}
			}
		}
		if(cek) break;
	}
	if(cek) printf("YES\n");
	else printf("NO\n");
	return 0;
}
