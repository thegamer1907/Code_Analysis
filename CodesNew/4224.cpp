// KALAM
# include <bits/stdc++.h>
using namespace std;

const int N = 200000 + 77;

int n , k , a[N] ;
long long ps[N];
pair < int , int > Mx;
int main(){
	scanf("%d %d" , & n , & k);
	for(int i = 1;i <= n;i ++){
		scanf("%d" , & a[i]);
	}
	sort(a + 1 , a + n + 1);
	for(int i = 1;i <= n;i ++){
		ps[i] = ps[i - 1] + a[i];
		int l = 0 , r = i;
		while(r - l > 1){
			int mid = (l + r) >> 1;
			if(a[i] * 1ll * (i - mid + 1) - (ps[i] - ps[mid - 1]) <= k){
				r = mid;
			}
			else{
				l = mid;
			}
		}
		if(i - r + 1 > Mx.second){
			Mx = make_pair(a[i] , i - r + 1);
		}
	}
	printf("%d %d\n" , Mx.second , Mx.first);
	return 0;
}	
