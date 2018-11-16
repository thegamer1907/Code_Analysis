#include <bits/stdc++.h>

using namespace std ;
const int SIZE =101;
vector<int> V;
vector <int > B;
int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	   int n , m;


	   cin >> n;
	   for(int i = 0 ; i< n;i++){
         int a;
         cin >> a;
         V.push_back(a);
	   }

	    cin >> m;
	   for(int i = 0 ; i< m;i++){
         int a;
         cin >> a;
         B.push_back(a);
	   }

    sort(V.begin() , V.end()) ;
    sort(B.begin() ,B.end())  ;
       int res = 0;
      for(int i =0 ; i< V.size() ;i++)
      for(int j =0 ; j < B.size() ; j++){
          if(abs(V[i]-B[j]) <= 1){
            B[j] = 1000;
            res ++;
            break ;
          }

      }
      	   cout << res;



}

