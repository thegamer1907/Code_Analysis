#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
	long long int n, m, k;
	long long int num = 1, cnt = 0, ans = 0, temp = 0;
	long long int arr[100002];
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < m; i++)
	{
		if (arr[i] <= (k * num) + temp) {
			cnt++;
		}
		else if(cnt!=0){
			temp += cnt;
			cnt = 0;
			ans++;
			i--;
		}
		else {
			num=(arr[i]-temp)%k? (arr[i] - temp) / k +1 : (arr[i] - temp) / k;
			i--;
		}
	}
	if (cnt != 0) {
		ans++;
	}
	cout << ans << endl;
}