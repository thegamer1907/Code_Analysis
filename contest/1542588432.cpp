//Mitesh Agrawal
#include <bits/stdc++.h>
using namespace std;

int arr[20];

int calc(int a){
	a %= 12;
	while(a < 0)
		a += 12;
	return a;
}

int main(){
	int i,j,h,m,s,t1,t2,flag;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	h %= 12;
	m /= 5;
	s /= 5;

	arr[h] = 1;
	arr[m] = 1;
	arr[s] = 1;
	// printf("%d %d %d\n\n", h,m,s);

	t1 %= 12;
	t2 %= 12;

	flag = 1;
	for(i = t1;;){
		i = calc(i);
		// printf("%d %d %d\n", i, arr[i], flag);
		if(arr[i] == 1){
			flag = 0;
			break;
		}
		if(i == calc(t2 - 1))
			break;
		i++;
	}
	if(flag){
		printf("YES\n");
		return 0;
	}

	flag = 1;
	for(i = t1;;){
		i--;
		i = calc(i);
		// printf("%d %d %d\n", i, arr[i], flag);
		if(arr[i] == 1){
			flag = 0;
			break;
		}
		if(i == t2)
			break;
	}
	if(flag){
		printf("YES\n");
		return 0;
	}


	printf("NO\n");


    return 0;
}