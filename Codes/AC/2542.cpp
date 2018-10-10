#include <bits/stdc++.h>
using namespace std;
#define MAX 10000005
#define ll long long int

bool v[MAX];
int temp, len, sp[MAX], cnt[MAX], pre[MAX];
void factorize(int k) {
	while(k>1) {
		temp = sp[k];
		while(k%temp == 0) {
			k/=temp;
		}
		cnt[temp]++;
	}
}

void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (ll i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (ll j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main()
{
	Sieve();
	int n,m,x,l,r;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		factorize(x);
	}
	for(int i=1;i<MAX;i++)
	{
		pre[i] = pre[i-1] + cnt[i];
	}
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d%d",&l,&r);
		r = min(r,max(l,10000000));
		if(l > 10000000)
		{
			cout<<"0\n";
			continue;
		}
		cout<<pre[r] - pre[l-1]<<endl;
	}
	return 0;
}