#include <iostream>
#include <stdio.h>

using namespace std;

char pa[3];

int N;

char c;
char no[3];

bool f=0,l=0;
bool key=0;

int main()
{
    scanf("%s",pa);

    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%s",no);
        if(pa[1] == no[0]) l = true;
        else if(pa[0] == no[1]) f = true;

        if(pa[0] == no[0] && pa[1] == no[1]) key = true;
        if(pa[0] == no[1] && pa[1] == no[0]) key = true;
    }

    if(key || (l&&f)) printf("YES");
    else printf("NO");

    return 0;
}
