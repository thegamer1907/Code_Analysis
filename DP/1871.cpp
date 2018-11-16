#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>
#define maxn 100000 + 10

typedef long long ll;

char Str[maxn];

int main()
{
    char *tmp;
    while( ~scanf( "%s", Str ) )
    {
        if( ( tmp = strstr( Str, "AB" ) ) != NULL && strstr( tmp + 2, "BA" ) != NULL )
        {
            printf( "YES\n" );
            return 0;
        }
        if( (tmp = strstr( Str, "BA" ) ) != NULL && strstr( tmp+2,"AB")!= NULL )
        {
            printf( "YES\n" );
            return 0;
        }
        printf( "NO\n" );
    }
    return 0;
}
