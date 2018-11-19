#include <iostream>
using namespace std;
int main(){

    string s;
    cin >>s;

    int n; 
    cin >> n;

    string a[n];
    
    for(int i = 0 ; i < n; i++){
    	
    	cin >> a[i];
    	

    }

    for(int i = 0; i< n; i++){
    	for(int j = 0; j < n; j++){
    	string s2 = "";
    	s2 += a[i];	
       	s2 += a[j];
       	//cout << s2 << " ";
       	for(int k = 0; k < s2.length()-1; k++){
       		string s3 = "";
    		s3 += s2[k]	;
       		s3 += s2[k+1];
      	//		cout << s3 << "\n";
      		if(s3 == s){
      			cout << "YES";
      			return 0;
      			}

      }

      
      }
    }
     cout << "NO";

     return 0;

	}