#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;

int N,L1,L2,L3;
char ch[5],A[5];

int main()
{
	scanf("%s",ch+1);
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		scanf("%s",A+1);
		if(A[1]==ch[2])L1++;
		if(A[2]==ch[1])L2++;
		if(A[1]==ch[1]&&A[2]==ch[2])L3++;
		//cout<<L1<<" "<<L2<<endl;
	}
	if(L1&&L2||L3)puts("YES");
	else puts("NO");
	return 0;
}

