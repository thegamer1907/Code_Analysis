#include <cstdio>
#include <cstring>
struct Clock{
    int pre;
    int nxt;
    int blocked;
}clk[ 66 ];

int main()
{
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    
    int i;
    int flag = 0, Head, Tail;
    
    for( i = 1; i < 60; i++ ){
        clk[ i ].pre = i - 1;
        clk[ i - 1 ].nxt = i;
    }
    clk[ 0 ].pre = 59;
    clk[ 59 ].nxt = 0;
    
    if( h == 12 ) h = 0;
    
    clk[ h * 5 ].blocked = 1;
    clk[ m ].blocked = 1;
    clk[ s ].blocked = 1;
    
    Head = t1 * 5, Tail = t2 * 5;
    
    if( Head == 60 ) Head = 0;
    if( Tail == 60 ) Tail = 0;
    
    //zheng
    while( Head != Tail ){
        if( clk[ Head ].blocked ){
            break;
        }
        else{
            Head = clk[ Head ].nxt;
        }
    }
    if( Head == Tail ){
        flag = 1;
    }
    
    
    Head = t1 * 5, Tail = t2 * 5;
    
    if( Head == 60 ) Head = 0;
    if( Tail == 60 ) Tail = 0;
    //fan
    while( Head != Tail ){
        if( clk[ clk[ Head ].pre ].blocked ){
            break;
        }
        else{
            Head = clk[ Head ].pre;
        }
    }
    if( Head == Tail ){
        flag = 1;
    }
    
    if( flag ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}
	 				   	    	 	  		 	   	 		