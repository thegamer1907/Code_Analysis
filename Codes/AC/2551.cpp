#include <bits/stdc++.h>

using namespace std;
int cnt[10000005];
bool flag[10000005];
int goboy[10000005];
void SieveOfEratosthenes()
{
   for(int i=2;i<=10000000;i++)
    {
        if(!flag[i])
        for(int j=i;j<=10000000;j+=i){
            flag[j] = 1;
            goboy[i]+=cnt[j];
        }
	}
}
vector<int> numbers(1000005);
int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
        scanf("%d",&numbers[i]),cnt[numbers[i]]++;

    SieveOfEratosthenes();
    int m;
    cin >> m;
    for(int i = 1;i <= 10000000;i++)
        goboy[i] += goboy[i-1];

    int l,r;
    while(m--)
	{
		scanf("%d%d",&l,&r);
		r = r>10000000?goboy[10000000]:goboy[r];
		l = l-1>10000000?goboy[10000000]:goboy[l-1];
		printf("%d\n",r-l);
	}
    return 0;
}
