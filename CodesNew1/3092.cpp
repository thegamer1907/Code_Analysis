#include <iostream>
#define db(x) cout << "> " << #x << ": " << x << endl;

const int N = 300010;
using namespace std;

bool a[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int res = 0;
	int l = 0, r = 0, cnt = 0;
	int st_ans = -1, end_ans = -1;
	
	while(l < n)
	{
		while(r < n)
		{
			if(a[r] == 0)
			{
				if(cnt == k)
					break;
				
				cnt++;
			}
			
			r++;
		}
		
		if(res < r -l)
		{
			res = r -l;
			st_ans = l;
			end_ans = r -1;
		}
		
		if(a[l] == 0)
			cnt--;
		
		l++;
	}
	
	cout << res << '\n';	
	
	for(int i = 0; i < st_ans; i++)
		cout << a[i] << ' ';
	
	if(st_ans != -1)
	{
		for(int i = st_ans; i <= end_ans; i++)
			cout << "1 ";
	}
		
	for(int i = end_ans +1; i < n; i++)
		cout << a[i] << ' ';
	cout << '\n';
	
	return 0;
}