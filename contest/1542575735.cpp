#include<bits/stdc++.h>

using namespace std;

vector<int> a[100000+10];
int n , k, b[100000+10];
int dem1 , dem0,dem00;
int main(){
	int flag ;
	cin >> n >> k;
	int dem = 0;
	for (int i = 1; i <= n; ++i) {
		int fll = 1;
		for (int j = 0; j < k; ++j)
			{
				cin >> b[j];
				if (b[j]) ++dem1;
					else ++dem0;
				if (b[j]) fll = 0;
			}
		if (fll) ++dem00;
		flag = 1;
		for (int h = 1 ; h <= dem; ++h){
			int fl2 = 1;
			for (int j = 0 ; j < k; ++j )
				if ( a[h][j] != b[j]) fl2 = 0;
			if (fl2 == 1) flag = 0;
		}
		
		if (flag) {
			++dem;
			for (int j = 0 ; j < k; ++j) a[dem].push_back(b[j]);
		}
				
	}
	
//	for (int i = 1; i <= dem; ++i){
//		for (int j = 0 ; j <a[i].size(); ++j)
//			cout << a[i][j] << " ";
//			cout << endl;
//	}
	if (dem00) {
		cout << "YES";
		return 0;
	}
	if ( k == 1)
		if (dem0 && dem1 || (dem0 > 1)) {
			cout << "YES";return 0;
		}
	{
		for (int i = 1; i <= dem; ++i)
			for (int j = i + 1; j <= dem ; ++j) {
				flag = 1;
				for (int h = 0; h < k; ++h)
					{
						int sum= a[i][h] + a[j][h];
						if (sum > 2 / 2) flag = 0;
					}
				if (flag == 1) {
					cout << "YES"; return 0;
				}
			}
	}
	{
		for (int i = 1; i <= dem; ++i)
			for (int j = i + 1; j <= dem ; ++j)
				for (int l = j + 1; l <= dem; ++l) {
				flag = 1;
				for (int h = 0; h < k; ++h)
					{
						int sum= a[i][h] + a[j][h] + a[l][h];
						if (sum > 3 / 2) flag = 0;
					}
				if (flag == 1) {
					cout << "YES"; return 0;
				}
			}
			
		for (int i = 1; i <= dem; ++i)
			for (int j = i + 1; j <= dem ; ++j)
				for (int l = j + 1; l <= dem; ++l) 
					for (int m = l + 1; m <= dem; ++m){
				flag = 1;
				for (int h = 0; h < k; ++h)
					{
						int sum= a[i][h] + a[j][h] + a[l][h] + a[m][h];
						if (sum > 4 / 2) flag = 0;
					}
				if (flag == 1) {
					cout << "YES"; return 0;
				}
			}
	}
	
	 {
		for (int i = 1; i <= dem; ++i)
			for (int j = i + 1; j <= dem ; ++j)
				for (int l = j + 1; l <= dem; ++l) 
					for (int m = l + 1; m <= dem; ++m){
				flag = 1;
				for (int h = 0; h < k; ++h)
					{
						int sum= a[i][h] + a[j][h] + a[l][h] + a[m][h];
						if (sum > 4 / 2) flag = 0;
					}
				if (flag == 1) {
					cout << "YES"; return 0;
				}
			}
			
		for (int i = 1; i <= dem; ++i)
			for (int j = i + 1; j <= dem ; ++j)
				for (int l = j + 1; l <= dem; ++l) 
					for (int m = l + 1; m <= dem; ++m)
						for (int g = m + 1; g <= dem; ++g){
				flag = 1;
				for (int h = 0; h < k; ++h)
					{
						int sum= a[i][h] + a[j][h] + a[l][h] + a[m][h] + a[g][h];
						if (sum > 5 / 2) flag = 0;
					}
				if (flag == 1) {
					cout << "YES"; return 0;
				}
			}
	}
	cout << "NO";
	return 0;
}
