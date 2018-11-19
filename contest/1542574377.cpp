
 #include "bits/stdc++.h"
 using namespace std;

 int Count[5] , A[5];
 int Set[100005];
 set<pair<int,int> > s;

 int main(){
  int x , Num , N , k , i , j , y , a , b;
  pair<int,int> Ones;
  set<pair<int,int> >::iterator it; 
  scanf( "%d%d" , &N , &k );
  
     for( i = 1 ; i <= N ; ++i ){
      x = 0;
      y = 0;

         for( j = 1 ; j <= k ; ++j ){
          scanf( "%d" , &Num );

             if( Num == 1 ){
              ++Count[j];
              ++x;
            }
             else
              ++y;  

          A[j] = Num;     	
        }

         if( x == 0 ){
          puts( "YES" );
          return 0; 
        }

      Set[i] = y;  
         
         if( k == 4 && y == 2 ){
          a = 10;
          b = 0; 
          int c , d;

             for( j = 1 ; j <= 4 ; ++j ){
                 if( A[j] == 1 ){
                  a = min( a , j );
                  b = max( b , j );
                }    
            } 
          
             if( b == 4 ){
                 if( a == 3 ){
                  d = 2;
                  c = 1;   
                }
                 else if( a == 2 ){
                  d = 3;
                  c = 1;
                }
                 else{
                  d = 3;
                  c = 2;
                } 
            }
             else if( b == 3 ){
              d = 4;

                 if( a == 2 )
                  c = 1;  
                 else
                  c = 2;
            }
             else{
              d = 4;
              c = 3;
            }

          it = s.find(make_pair(c,d));

             if( it != s.end() ){
              puts( "YES" );
              return 0;  
            }  

          s.insert(make_pair(a,b));   
        }  
    }
  
     for( i = 1 ; i <= k ; ++i ){
         if( Count[i] == N ){
          puts( "NO" );
          return 0;  
        }
    }
     
     if( k == 2 ){
      puts( "YES" );
      return 0;
    }
  
     if( k == 3 ){
         for( i = 1 ; i <= N ; ++i ){
             if( Set[i] >= 2 ){
              puts( "YES" );
              return 0; 
            }
        }

      puts( "NO" );
      return 0;        
    }
  
     for( i = 1 ; i <= N ; ++i ){
         if( Set[i] >= 3 ){
          puts( "YES" );
          return 0;
        }  
    }
  
  puts( "NO" );
  return 0;
} 
