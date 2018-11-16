/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--){
        for(int i=0;i<n-1;i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout << s;
}