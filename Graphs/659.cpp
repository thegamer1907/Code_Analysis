/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
        for(int i=0;i<n-1;i++){
            if(a[i]=='B' && a[i+1]=='G'){
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
