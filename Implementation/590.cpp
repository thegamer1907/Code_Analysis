#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n , k ;
    cin >> n >> k ;

    int score[n] ;
    for(int i = 0 ; i < n ; i ++ ) cin >> score[i] ;

    int next = 0 ;
    int scr = score[k-1] ;
    for(int i = 0 ; i < n ; i ++ ) if(score[i] >= scr && score[i] != 0 ) next ++ ;
    cout<<next<<endl;
}
