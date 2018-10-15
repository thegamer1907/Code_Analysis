#include <iostream>
#include <vector>
#include <algorithm>

int main( void ){

  std::vector<long long unsigned *> values;
  int n,q;
  
  std::cin >> n >> q;

  for( int i = 0; i < n; ++i ){
    unsigned long long curr;
    std::cin >> curr;
    if( values.size() )
      curr += *values[i-1];
    values.push_back( new long long unsigned( curr ) );
  }

  unsigned long long previous = 0;

  for( int i = 0; i < q; ++i ){
    unsigned long long curr;
    std::cin >> curr;
    std::vector<long long unsigned *>::iterator upp_it;
    upp_it = std::upper_bound( values.begin(), values.end(), curr + previous,
                               []( const unsigned long long  val1, unsigned long long * val2 ){
                                     return val1 < *val2;
                                   } );
    int alive;

    if( upp_it == values.end() ){
      previous = 0;
      alive = values.size();
    }
    else{
      previous += curr;
      alive = values.size() - ( upp_it - values.begin() + 1 );
      if( ( **upp_it - previous ) != 0 ){
        ++alive;
      }
    }

    std::cout << alive << std::endl;

    /*
    if( (unsigned)( low_it - values.begin() ) == values.size() )
      previous = 0;
    else
      previous = **low_it;

    int alive = values.size() - ( low_it - values.begin() + 1 );
    if( alive < 1 )
      alive = values.size();
    else if( ( previous - curr ) > 0 )
      ++alive;
    

    std::cout << alive << std::endl;*/
  }

  for( int i = 0; i < n; ++i )
    delete values[i];

}
