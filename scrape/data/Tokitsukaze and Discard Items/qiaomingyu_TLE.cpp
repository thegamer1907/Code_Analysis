#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int a[maxn];
int main(){
	long long n;
	int m,k;
	cin >> n >> m >> k;
	for(int i = 0;i<m;i++){
		cin >> a[i];
	}
	sort(a,a+m);
	int ans = 1;
	int y = k;//��һҳ�ֽ�� 
	int s = 0;//���ߵĸ��� 
	for(int i = 0;i<m;i++){
		if(a[i] > y){
			if(s != 0) {
				y += s;
				ans++;
			} 
			else y += k;
			i--;
			s = 0;	
		} 
		else {
			s++;
		}
	}
	cout << ans << endl;
	return 0;
}