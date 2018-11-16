/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int* portal_desti, n, destination, i;
    int start = 1;
    
    cin >> n >> destination;
    
    portal_desti = new int[n-1];
    
    for(i=0;i<n-1;i++){
        cin >> portal_desti[i];
        if(start != i+1)
            continue;
        start = start + portal_desti[start - 1];
        if(start == destination){
            cout << "YES" << endl;
            return 0;
        }
    }
    
    
    //while(start != n-1){
    //    start = start + portal_desti[start - 1];
    //    if(start == destination){
    //        cout << "YES" << endl;
    //        return 0;
    //    }
    //}
    
    cout << "NO" << endl;
    return 0;
}
