#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
int const N = 100002;
int a , k;
char s[N];
int check(int m){
	int cur = k , j = 0;
	for(int i = 0 ; i < a; i++){
		if(s[i]=='a'){
			if(i - j + 1 >= m)return true;
		}else{
			if(cur>0){cur--;if(i - j + 1 >= m)return true;}
			else{
				while(cur==0 && j <= i){
					if(s[j]=='b')cur++;
					j++;
				}
				if(cur > 0)cur = 0;
			}

		}
	}

	cur = k , j = 0;
	for(int i = 0 ; i < a; i++){
		if(s[i]=='b'){
			if(i - j + 1 >= m)return true;
		}else{
			if(cur>0){cur--;if(i - j + 1 >= m)return true;}
			else{
				while(cur==0 && j <= i){
					if(s[j]=='a')cur++;
					j++;
				}
				if(cur>0)cur=0;
			}
		}
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	#endif
	scanf("%d%d%s",&a,&k,s);
	int l = 1 , r = a , ans = -1 , mid;
	while(l<=r){
		mid = (l+r)/2;
		if(check(mid)){
			ans = mid;
			l = mid+1;
		}
		else r = mid - 1;
	}
	printf("%d\n", ans);
	return 0;
}