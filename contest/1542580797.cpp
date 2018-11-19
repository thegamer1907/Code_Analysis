#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mem(a,x) memset(a,x,sizeof(a))
#define maxn 

int a[5],t1,t2;

int main(){
	while(scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&t1,&t2) != EOF){
		a[1] *= 3600;
		a[1] = a[1] + a[2] * 60 + a[3];
		a[1] %= 43200;
		a[2] *= 60;
		a[2] += a[3];
		a[2] *= 12;
		a[2] %= 43200;
		a[3] *= (60 * 12);
		a[3] %= 43200;
		t1 *= 3600;
		t2 *= 3600;
		t1 %= 43200;
		t2 %= 43200;
		sort(a + 1,a + 1 + 3);
//		printf("%d %d %d %d %d\n",a[1],a[2],a[3],t1,t2);
		if((t1 >= a[1] && t1 <= a[2] && t2 >= a[1] && t2 <= a[2]))
			puts("YES");
		else if((t1 >= a[2] && t1 <= a[3] && t2 >= a[2] && t2 <= a[3]))
			puts("YES");
		else if((t1 <= a[1] || t1 >= a[3]) && (t2 <= a[1] || t2 >= a[3]))
			puts("YES");
		else
			puts("NO");
	}
	return 0;
} 