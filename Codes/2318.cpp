#include <bits/stdc++.h>
#define PI                acos(-1)
#define pb                push_back
#define mp                make_pair
#define all(a)            (a).begin(), (a).end()
#define clr(a,h)          memset(a, (h), sizeof(a))
#define F first
#define S second
int faster_in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -faster_in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}

using namespace std;

const int INF = int(1e9 + 7);
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<int>     vi;
typedef vector<ii>      vii;
typedef vector<ll>      vll;

bool esPrimo[10000010];
int v[10000010];
vi primos;
int sum[10000010];

void criba()
{
	for (int i = 0; i < 10000010; i++) esPrimo[i] = true;
	for (int i = 2; i <= 10000000; i++)
	{
		if (!esPrimo[i]) continue;
		primos.push_back(i);
		sum[i] += v[i];
		//cout << i << endl;
		for (int j = i + i; j <= 10000000; j += i)
		{
			esPrimo[j] = false;
			sum[i] += v[j];
		}
		if (i < 20)
		{
			//cout << i << " " << sum[i] << endl;
		}
	}
	//cout << "done" << endl;
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int n;
    cin >> n;
    clr(sum, 0);
    clr(v, 0);
    for (int i = 0; i < n; i++)
    {
    	int x;
    	cin >> x;
    	v[x]++;
    }
    primos.clear();
    criba();
    for (int i = 1; i < 10000010; i++)
    {
    	sum[ i ] += sum[ i-1 ];
    }
    int q;
    cin >> q;
    while (q--)
    {
    	int a, b;
    	cin >> a >> b;
    	cout << sum[ min(b, 10000000) ] - sum[min(a-1, 10000000-1)] << '\n';
    }
    return 0;
}
