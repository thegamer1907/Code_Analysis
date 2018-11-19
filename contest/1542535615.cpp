#include <cstdio>
#include <cstring>

short flagh[ 30 ] = {0}, flagt[ 30 ] = {0};

int main()
{
    char stra[ 10 ], strt[ 10 ];
    int n, i;
    
    scanf("%s", stra);
    scanf("%d", &n);
    
    for( i = 1; i <= n; i++){
        scanf("%s", strt);
        if( strcmp( stra, strt ) == 0 ){
            // ok
            printf("YES\n");
            break;
        }
        else{
            flagh[ strt[ 0 ] - 'a' ] = 1;
            flagt[ strt[ 1 ] - 'a' ] = 1;
            
            if( flagt[ stra[ 0 ] - 'a' ] && flagh[ stra[ 1 ] - 'a' ] ){
                //ok
                printf("YES\n");
                break;
            }
        }
    }
    if( i > n )
        printf("NO\n");
    return 0;
}
    	  		    		 	     	 	 		  	