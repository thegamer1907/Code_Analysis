/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i < n; i++){
        cin >> a[i];
    }
    int num = a[k-1];
    int count = 0;
    for(int i=0; i < n; i++){
        if(a[i] >= num && a[i] > 0)
            count++;
    }
    cout << count << endl;
    
    return 0;
}
