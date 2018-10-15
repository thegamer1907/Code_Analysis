#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int n, a[5000007];

int main(){

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	//for (int i = 0; i < n; i++)
	//cout << a[i] << " ";
	//cout << endl;

	int ans = n, k = ceil((double)n / 2.0), j = 0;

	while (k < n && j < n / 2){
		while (k < n){
			if ((a[j] * 2) <= a[k]){
		//		cout << k << ":" << j << endl;
				ans--;
				j++;
				k++;
				break;
			}
			k++;
		}
	}

	cout << ans;

	//system("pause");
	return 0;
}