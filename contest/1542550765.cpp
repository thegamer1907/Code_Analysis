#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	char a[10] , b[10];  
    int i , n , pos = 0 , ans = 0;  
    cin >> a;
    cin >> n;
    while (n--){
    	cin >> b;
    	if (!ans && a[1] == b[0])
    		ans = 1;
    	if (!pos && a[0] == b[1])
    		pos = 1;
    	if (a[0] == b[0] && a[1] == b[1])
    		pos = 1 , ans = 1;
	}
	if (pos && ans)
		printf ("YES\n");
	else 
		printf ("NO\n");
    return 0;  
}

    		  			  	  	  				 	 		 	