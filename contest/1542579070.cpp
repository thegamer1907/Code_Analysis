/**
*
* Author: Mouhanad
* Lang: GNU C++14
*
**/
#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ii pair < int , int >
#define LS pair < ll , string >
typedef long long ll;
const int inf = 1<<30;
const int N =100100;
int n , a[N] , k ;
int bin []= {1, 2, 4 , 8 };
int frq[N];
int x ;
int main ( ){
scanf("%d %d",&n,&k);
bool sol = 0 ;
set < int > se ;
int c ;
 for ( int i = 0 ; i < n ;i++ ){
    for ( int j = k-1; j >= 0 ; --j ){
          scanf("%d",&c);
           if (c){ x+=bin[j];}
    }
    a[i] = x ;
    se.insert(x);
    if ( x == 0 ) sol = 1 ;
    x = 0 ;
 }
 if ( sol ){
    printf("YES\n");
    return 0;
 }
 vector < int > tony ;
 for ( auto x : se )
    tony.push_back(x);
 for ( int i = 0 ; i < tony.size() ; i++ ) {

    for ( int j = i+1 ; j < tony.size(); j++ ){
          //  cerr << tony[i] << " " << tony[j] <<endl;
        if ( (tony[i]&tony[j]) == 0 ) sol =1 ;
    }
 }
 if ( sol )printf("YES");
 else printf("NO");
return 0 ;
}
