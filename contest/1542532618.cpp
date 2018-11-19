#include <iostream>
using namespace std;
int main(){
        int n,j, k,mok, mask[16] = {0};
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
                mok = 0;
                for (j = 0; j < k; j++) {
                        int t;
                        cin >> t;
                        mok = (mok << 1) | t;
                }
                mask [mok] = 1;
        }
 
        for (int a = 0; a < (1<<k); a++) {
                for (int b = a; b < (1<<k); b++) {
                        int c=a&b;;
                        if ((c == 0) && mask[a] && mask[b]) {
                                cout << "YES\n";
                                return 0;
                        }
                }
        }
        cout << "NO\n";
        return 0;
}