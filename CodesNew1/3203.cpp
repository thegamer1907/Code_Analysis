#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
#define X first
#define Y second
#define MP make_pair
const int maxn=3e5+100 ;
typedef pair<int,int> pii ;
vector<int> pos ;
int arr[maxn] ;
int main()
{
	int n,k ;
	scanf("%d %d",&n,&k) ;
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr+i) ;
		if(arr[i]==0)
			pos.push_back(i) ;
	}
	if(k+n-(int)pos.size()>=n)
	{
		printf("%d\n",n) ;
		for (int i=0;i<n;i++)
			printf("1 ") ;
		puts("") ;
	}
	else
	{
		pii maxi=max(MP(pos[k],0),MP(n-pos[pos.size()-k-1]-1,pos[pos.size()-k-1]+1));
		for (int i=1;i<(int)pos.size()-k-1;i++)
			maxi=max(MP(pos[i+k+1]-pos[i]-1,pos[i]+1),maxi) ;
		printf("%d\n",maxi.X) ;
		for(int i=0;i<n;i++)
		{
			if(i==maxi.Y)
				for(int j=0;j<maxi.X;j++)
				{
					if(j>0)
						i++;
					printf("1 ") ;
				}
			else
				printf("%d ",arr[i]) ;
		}
		puts("") ;
	}
}
