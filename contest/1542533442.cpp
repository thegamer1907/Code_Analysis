#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, k;
string a[100000];
int mej[100000];
long long c[20000];

bool f(int x){
	 k++;
	 int con = 0;
	 //cout << a[n] << "\n";
	 //for (int xx = 1; xx <= x; xx++)
	 for (int i = 0; i <= (int)a[n].size()-x; i++){
	 	  int ma = 0;
	 	  for (int j = i, y = 0; j < i+x; j++, y++)
	 	  	   if (a[n][j] == '1')
	 	  	   	   ma += 1<<y;
	 	  if (c[ma] != k) con++;
	 	  c[ma] = k; 	
	 	 // printf ("-- %d\n", ma);   	
	 }

	 if (con >= 1<<x) return true;
	 return false;
}

int main(){

    cin >> n;
    for (int i = 1; i <= n; i++)
    	 cin >> a[i];
    
    cin >> m;
    for (int i = 1; i <= m; i++){
    	 cin >> x >> y;
    	 a[++n] = a[x] + a[y];
    	 k++;
    	 if ((int)a[n].size() > 1000)
    	     a[n] = a[n].substr (0, 500) + a[n].substr((int)a[n].size()-500, 500);
   
    	 int ini = max(mej[x], mej[y]), fin = 14, sol = max(mej[x], mej[y]);  
    	 while (ini <= fin){
                int piv = (ini+fin)/2;
                if (f(piv))
                	ini = piv+1, sol = piv;
                 else
                    fin = piv-1;	 
    	 }

    	 printf ("%d\n", sol);
    	 mej[n] = sol;
         
          }

	return 0;
}