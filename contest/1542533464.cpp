#include <bits/stdc++.h>

using namespace std;

int n, m, a, mar[100000];

int main(){
    
    scanf ("%d %d", &n, &m);
    
    mar[(1<<m)-1]++;
    for (int i = 1; i <= n; i++){
    	 int mask = 0;
    	 for (int j = 0; j < m; j++){
    	 	  scanf ("%d", &a);
    	 	  if (a) mask += 1<<j;
    	 }
         
         int x = ((1<<m)-1)^mask;
        
         
         for(int mx = x; mx > 0; mx = (mx - 1) & x) { 
         	// printf ("%d\n", mx);
		    if (mar[mx]){
		    	printf ("YES\n");
		    	return 0;
		    }
	     }

         mar[mask]++; 
    }

    printf ("NO\n");


	return 0;
}