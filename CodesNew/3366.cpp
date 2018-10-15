#include <iostream>
using namespace std;

int main()
{
    long long n, m, mCat, a, maxSitting, minSitting, minK, maxK, total = 0;
    cin >> n;
    cin >> m;
    mCat = m;
    long long input[n];
    for( long long i = 0; i < n; i++ ){
        cin >> a;
        total += a;
        input[i] = a;
        
        if( i == 0 ){
            
            maxSitting = a;
            minSitting = a;
        }else{
            if( a > maxSitting ){
             
                maxSitting = a;   
            }
            if( a < minSitting ){
                
                minSitting = a;
            }
        }
    }
    maxK = maxSitting + m;
    if( minSitting + m == maxSitting ){
        
        minK = minSitting + m;
    }else if( minSitting + m < maxSitting ){
        
        minK = maxSitting;
    }else{
        for(int i = 0; i < n;i++ ){
            long long diff = maxSitting - input[i];
            m -= diff;
        }
        if( m <= 0 ){
            
            minK = maxSitting;
        }else{
            long long remaining = ( total + mCat ) - ( n * maxSitting );
            if( remaining % n == 0 ){
                
                minK = maxSitting + remaining / n;
            }else{
                minK = maxSitting +( remaining / n ) + 1;
            }
        }
    }
    
    cout << minK << " " << maxK;
    return 0;
}