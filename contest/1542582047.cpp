#include<bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair

set<int> s;
int n,k;

void d(int x, int i){
	if(i == k) return;
	s.insert(x);
	if(x & 1 << i){
		d(x,i+1);
	}
	else{
		d(x,i+1);
		s.insert(x | (1 << i));
		d(x | (1 << i),i+1);
	}
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0; i < n; i++){
		int q = 0;
		int p = 0;
		int op = 0;
		int v2[5];
		for(int j = 0; j < k; j++){
			int x;
			scanf("%d",&x);
			if(x) q++;
			p |= x << j;
			op |= (!x) << j;
			v2[j] = x;
		}
		if(s.count(op)){
			printf("YES\n");
			return 0;
		}
		d(p,0);
		if(!q){
			printf("YES\n");
			return 0;
		}
	} 	
	printf("NO\n");
    return 0;
}