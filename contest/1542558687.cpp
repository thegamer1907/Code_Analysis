#include <iostream>
#include <math.h>       /* round, floor, ceil, trunc */
#include <string.h>


using namespace std;

int main() {

    string  pass, pa, p1, p2;int x; bool f1= false, f2= false;
    
    cin >> pass >> x;
  
    while(cin >> pa){
        if((pass.at(1) == pa.at(1)) && (pass.at(0) == pa.at(0))){
            f2 = true; f1 = true;
        }
        if ((pass.at(0) == pa.at(1))) f1 = true;
        if ((pass.at(1) == pa.at(0)))  f2 = true;
        if(f1 && f2) break;
        
    }
    if(f1 && f2 ) cout << "YES";
    else cout << "NO";
    
    

    
    return 0;
}
