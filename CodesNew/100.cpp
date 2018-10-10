#include <iostream>
#include <stdlib.h> 
#include <algorithm>

using namespace std;




int main()
{
    int N,L, input;
    float ma = 0.0;
    float dif = 0.0;
    cin >> N >> L;
    int array[N];
    for(int i = 0 ; i<N;i++){
        cin >> input;

          array[i] = input;
        }
        
        
    
    sort(array, array + N);
    float ini  = array[0];
    float fin = L-array[N-1];

    for(int j = 0; j<N; j++){
        dif = array[j]-array[j-1];
        ma = max(ma , dif);
      
    }
    float g= ma / 2.0;
    g = max(g,ini);
    g = max(g,fin);
    cout.precision(10);
    cout << fixed <<g;
    return 0;

    

}
// 1538612404146
