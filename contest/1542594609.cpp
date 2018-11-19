#include <stdio.h>
#include <string.h>

char sta[2];

bool ha,hb;
int main()
{
	int N;
	scanf("%s",sta);
	scanf("%d",&N);
	char ss[4];
	for(int wi=1;wi<=N;++wi)
	{
		scanf("%s",ss);
		if(ss[0]==sta[1])
			hb=1;
		if(ss[1]==sta[0])
			ha=1;
		if(ss[0]==sta[0]&&ss[1]==sta[1])
			ha=hb=1;
	}
	if(ha&&hb)
		puts("YES");
	else
		puts("NO");
	return 0;
}
