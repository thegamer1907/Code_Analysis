#include <iostream>
#include <algorithm>

using namespace std;

// always declare big array here it's safer for stack than inside of main

int main(){

         // elements before me is (i - 1) * m + m - 1

         //  freopen("input.txt","r",stdin);
         //  freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
         cout.tie(NULL);

         int n , m , cnt = 0;
         cin >> n;
         int b[n];
         for(int i = 0 ; i < n ; i++)
            cin >> b[i];

         cin >> m;
         int g[m];
         for(int i = 0 ; i < m ; i++)
            cin >> g[i];

         sort(b , b + n);
         sort(g , g + m);

         int i = 0 , j = 0;
         while(i < n && j < m){
            if(abs(b[i] - g[j]) <= 1){
                cnt++;
                i++;
                j++;
            }
            else{
                if(b[i] < g[j])
                    i++;
                else j++;
            }
         }

         cout << cnt;

    return 0;
}