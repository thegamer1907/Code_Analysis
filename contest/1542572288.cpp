#include <bits/stdc++.h>
 using namespace std;

         string c[101];
         pair < bool, bool > t;
         
  int main () {
  	 
  	  string a;
  	    cin >> a;
  	     
  	       int n;
				 scanf ("%d", &n);
				 
     for (int k=1; k<=n; k++) {
     	       cin >> c[k];
	        if (c[k][0]==a[1]) { t.first=true;  }
	        if (c[k][1]==a[0]) { t.second=true; }
	        if (c[k]==a) { t.first=true; t.second=true; }
	
	 	  }  
	   
	    
	     if (t.first && t.second) { cout << "YES"; return 0; }
	     
	    cout << "NO";
	   
  	return 0;
  }