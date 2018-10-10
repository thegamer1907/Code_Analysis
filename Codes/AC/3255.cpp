#include<cstdio>
#include<algorithm> 
int n;
int a[100007] = {0,100,20,10,5,1}; 
int main() { 
	scanf("%d",&n); 
	int minn = 1e9 + 7; 
	for(int i = 1;i <= n;++ i)scanf("%d",a + i),minn = std::min(a[i],minn); 
	int k = minn / n; 
	for(int i = 1;i <= n;++ i) a[i] -= k * n; 
	for(int i = 1;;++ i) { 
		int k = i % n; if(k == 0)k = n;
		if(a[k] - i < 0){printf("%d\n",k);break;} 		
	} 
	/*for(int i = 1;i <= n;++ i) { 
		if(a[i] - tmp <= 1) { 
			printf("%d\n",i);
			break; 	
		}  
		tmp ++; 
	} */ 
	return 0; 
} 
