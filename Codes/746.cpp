#include <bits/stdc++.h>
#define LL long long
#define VI vector<int>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
using namespace std;
bool perfect(int x){
	int s = 0;
	while(x){
		s += (x%10);
		x /= 10;
	}
	return s == 10;
}
int main(){
	int k;
	scanf("%d", &k);
	int i;
	for(i = 19; k; i++) k -= perfect(i); i--;
	printf("%d\n", i);
	return 0;
}