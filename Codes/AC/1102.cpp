#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

const int MAXN = 100003;

int N, D;
long long factor[MAXN], money[MAXN];

void swp(int a, int b){
	long long tmp;
	tmp = factor[a]; factor[a] = factor[b]; factor[b] = tmp;
	tmp = money[a]; money[a] = money[b]; money[b] = tmp;
}
	 
void quicksort(int l, int r){
	if(l >= r)
		return ;
	
	int m = l + rand() % (r - l + 1);
	swp(l, m);
	
	int i, sep = l;
	for(i = l + 1; i <= r; i ++){ 
		if(money[i] < money[l]){
			sep ++;
			swp(sep, i);
		}
		else if(money[i] == money[l] && rand() % 2 == 0){
			sep ++;
			swp(sep, i);
		}
	} 
	swp(l, sep);
	
	quicksort(l, sep - 1);	quicksort(sep + 1, r);
}

int main(){
	scanf("%d%d", &N, &D);
	for(int i = 1; i <= N; i ++)
		scanf("%I64d %I64d", &money[i], &factor[i]);	
		
	quicksort(1, N);
	
	long long tail = 0, recent = 0, maxFactor = 0;
	for(int i = 1; i <= N; i ++){
		for(int j = tail; j < N; j ++){
			if(money[j + 1] >= money[i] + D)
				break;
			recent += factor[j + 1];
			tail ++;
		}
		maxFactor = max(maxFactor, recent);
		recent -= factor[i];
	}
	
	printf("%I64d\n", maxFactor); 
	return 0;
}


