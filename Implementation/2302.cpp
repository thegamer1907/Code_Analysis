#include <bits/stdc++.h>

using namespace std;


int main(){
   int n,c=0;
   cin >> n;
  string A;
  cin >> A;
    for (int i = 0; i < n-1; ++i) {
        if(A[i]==A[i+1])
            c++;
    }
    cout << c << endl;
    return 0;

}