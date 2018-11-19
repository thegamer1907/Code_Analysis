
 #include "bits/stdc++.h"
 using namespace std;

 int main(){
  int x , y , p , m , s , t1 , t2;
  scanf( "%d%d%d%d%d" , &p , &m , &s , &t1 , &t2 );
  double h; 

     if( t1 > t2 )
      swap( t1 , t2 );  
  
  x = t1 * 5;
  y = t2 * 5;

     if( m > 0 || s > 0 ){
         if( p == 12 )
          h = 0.5;
         else
          h = p + 0.5;
    }
     else
      h = p;	

     if( m == 0 )
      m = 60;
     if( s == 0 )
      s = 60; 	

     if( h > t1 && h < t2 ){
         if( m >= x && m < y ){
             if( s > x && s < y )
              puts( "YES" );  
             else
              puts( "NO" );  
        }
         else
          puts( "NO" );
    }
     else{
         if( m >= x && m < y )
          puts( "NO" );
         else{
             if( s > x && s < y ) 
              puts( "NO" );
             else
              puts( "YES" );  
        } 	
    }

  return 0;
} 
