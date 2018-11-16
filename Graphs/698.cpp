
/* CICADA 3301 */

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, t, x;
    char tas[100], p, q;
    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >> tas[i];
    }

    for (int i = 0; i < t; i++){
        for (int j = 0; j < n; j+=x){
                if(tas[j] == 'G' && tas[j+1] == 'B' && j < n - 1){
                    x = 1;
                }
              if (tas[j] == 'B' && tas[j+1] == 'G' && j < n - 1){
                tas[j] = 'G';
                tas[j+1] = 'B';
                x = 2;

            }
            /*if(j == n - 1  && tas[j] == 'G' && tas[j-1] == 'B'){
                    tas[j-1] = 'G';
                    tas[j] = 'B';
                    break;
                }*/
                else {
                    x = 1;
                    continue;
                }
        }

   }



    for(int i = 0; i < n; i++){
        cout << tas[i];
    }

}
