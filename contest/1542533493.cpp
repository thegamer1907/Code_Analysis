#include <bits/stdc++.h>

using namespace std;

int n;
string a, b[1000];

int main(){

    cin >> a;
    cin >> n;
    for (int i = 0; i < n; i++){
    	 cin >> b[i];
    }

    for (int i =0; i < n; i++){
    	 for (int j = 0; j < n; j++){
    	      string s = b[i] + b[j];
              for (int k = 0; k < s.size()-1; k++)
              	   if (s[k] == a[0] && s[k+1] == a[1]){
              	   	   cout << "YES\n";
              	   	   return 0;
              	   }
    	 }
    }
   

    cout << "No\n";

	return 0;
}