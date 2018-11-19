#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include <vector>
using namespace std;

char mm[3] ;
char most[200][3] ;
bool flag , flag1 , flag2 ;
int n ;
char a , b ;
bool check(){
    if(flag) return true ;
    for(int i = 0 ; i < n ; i ++ ){
        if(most[i][0] == b) flag1 = 1 ;
        if(most[i][1] == a) flag2 = 1 ;
    }
    if(flag1 && flag2) return true ;
    return false ;
}
int main(){
    scanf("%s" , mm) ;

    scanf("%d" , &n) ;
    a = mm[0] , b = mm[1] ;
    flag1 = 0 , flag2 = 0 , flag = 0 ;
    for(int i = 0 ; i < n ; i ++) {
        scanf("%s" , most[i]) ;
        if((most[i][0] == a && most[i][1] == b )||(most[i][0] == b && most[i][1] == a ) ) flag = 1 ;
    }
    if(check()) puts("YES") ;
    else puts("NO") ;
    return 0 ;
}
