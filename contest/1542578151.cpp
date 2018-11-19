#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MAXN 101100
#define PI acos(-1)
typedef long double ld;
#define EPS 1e-9
int n, k, x, val;
int freq[20];
int sum[6];
int vet[4];
int tmp[4];
	
bool maior(){
	vector<int> v1, v2;
	for (int i = 0; i < k; i++)
	{
		v1.pb(tmp[i]);
		v2.pb(vet[i]);
		
	}
	sort(v1.rbegin(), v1.rend());
	sort(v2.rbegin(), v2.rend());
	//~ for (int i = 0; i < k; i++)
	//~ {
		//~ cout << v1[i] << " ";
	//~ }
	//~ cout << endl;
	
	for (int i = 0; i < k; i++)
	{
		if(v1[i] > v2[i]) return true;
		if(v1[i] < v2[i]) return false;
		
	}
	return false;
}

int main(){
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		val = 0;
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &x);
			val *= 2;
			val += x;
			sum[j] += x;
		}
		//~ printf("val=%d\n", val);
		freq[val]++;
	}
	
	int tem = n;
	int lim;
	
	bool erro;
	int at = 0;
	int mx, aux;
	int tiramx;
	
	//~ for (int i = 0; i < k; i++)
	//~ {
		//~ printf("sum[i] = %d\n", sum[i]);
	//~ }
	
	while (tem > 0)
	{
		lim = tem / 2;
		erro = false;
		at = 0;
		//~ printf("tem = %d  lim = %d\n", tem , lim);
		//~ printf("sum = ");
		for (int i = 0; i < k; i++)
		{
			vet[i] = 0;
			tmp[i] = 0;
			//~ printf("%d ", sum[i]);
			if(sum[i] > lim){
				erro = true;
				//~ break;
			}
			at *= 2;
			at += (sum[i] > 0);
		}
		//~ cout << endl;
		if(!erro){
			printf("YES\n");
			return 0;
		}
		
		mx = -1;
		val = 0;
		for (int i = 0; i < 1<<k; i++)
		{
			//~ cout << endl << endl << endl;
			//~ printf("i = %d  freq = %d\n", i, freq[i]);
			if(freq[i] > 0){
				for(int j = 0; j < k; j++){
					if(i & (1<<j)){
						tmp[k-j-1] = sum[k-j-1];
						//~ if(i == 6) printf("tmp[%d] = %d\n", k-j, tmp[k-j]);
					}else tmp[k-j-1] = 0;
				}
				//~ cout << "\ni = " << i << endl;
				//~ printf("tmp = ");
				//~ for(int j = 0; j < k ; j++){
					//~ printf("%d ", tmp[j]);
				//~ }
				//~ printf("\n");
				
				if(maior()){
					//~ cout << "maior = " << i << endl;
					//~ printf("tmp = ");
					for(int j = 0; j < k ; j++){
						vet[k-j-1] = tmp[k-j-1];
						//~ printf("%d ", vet[k-j]);
					}
					//~ printf("\n");
					val = i;
					mx = 1;
				}
			}
			
		}
		if(mx == -1){
			break;
		}
		
		freq[val]--;
		//~ printf("tirando %d\n", val);
		for (int i = 0; i < k; i++)
		{
			if(val & (1<<i)) sum[k-i-1]--;
		}
		
		tem--;
	}
	
	
	printf("NO\n");
		
	
	return 0;
}
