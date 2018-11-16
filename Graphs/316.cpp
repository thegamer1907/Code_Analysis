#include <stdio.h>
#include <algorithm>
#include <string.h>

int main()
{
    int n,i,j,t;
    char s[51];
    scanf("%d %d",&n,&t);
    scanf("%s", s);
    for (i=0; i<t; i++) {
        for (j=1; j<n; j++) {
            if(s[j-1] == 'B' && s[j] == 'G')
            {
                s[j-1] = 'G';
                s[j] = 'B';
                j++;
            }
        }
    }
    printf("%s\n",s);
	return 0;
}
