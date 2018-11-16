#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int n,k,cont=0,num, numbers[51];
	scanf("%d %d",&n,&k);

	for(int i=0;i<n;i++)
		scanf("%d",&numbers[i]);

	for(int i=0;i<n;++i){
		if(numbers[i]>=numbers[k-1] && numbers[i]>0)
			cont++;
		else
			break;
	}
	printf("%d\n",cont);
}