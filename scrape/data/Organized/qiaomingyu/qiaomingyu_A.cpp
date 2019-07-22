#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;
long long a[maxn];
int main(){
	long long n;
	long long m,k;
	cin >> n >> m >> k;
	for(long long i = 0;i<m;i++){
		cin >> a[i];
	}
	sort(a,a+m);
	long long ans = 1;
	long long y = k;//��һҳ�ֽ�� 
	long long s = 0;//���ߵĸ��� 
	for(long long i = 0;i<m;i++){
		if(a[i] > y){ // ���� y 
			if(s != 0) {
				y += s;
				ans++;
			} 
			if(a[i]>y) { //��δ���� 
				long long u = (a[i]-y-1)/k+1; 
				y += u*k;
			}//a[i]��С��y  
			s = 1;	
		} 
		else {
			s++;
		}
	}
	cout << ans << endl;
	return 0;
}