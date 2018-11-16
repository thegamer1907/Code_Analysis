#include<bits/stdc++.h>
using namespace std;
int n,cnt;
void rua(int k){cnt+=n/k,n%=k;}
int main()
{
	scanf("%d",&n);
	rua(100),rua(20),rua(10),rua(5),rua(1);
	return printf("%d\n",cnt),0;
}
