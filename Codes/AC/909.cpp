#include <iostream>
#include <string>
using namespace std;

int main(){
    long n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    if (k == 0){
        long len = 0;
        long maxlen = 1;
        long i = 0;
        while (i < n){
            if (s[i] == s[i-1]) len++;
            else len = 1;
            i++;
            if (maxlen < len) maxlen = len;
        }
        cout << maxlen;
        return 0;

    }
    // string a
    long k1 = k;
    long maxlen = 1;
    long len = 0;
    long pos = 0;
    long j = 0;
    if (j < n-1){
        pos = j;
        len = 1;
        if (s[j] == 'b') k1--;
        for (long i = j+1; i < n; i++){
            if (s[i] == 'a'){
                len++;
            }
            else{
                if (k1 > 0){
                    k1--;
                    len++;
                }
                else{
                    while (s[pos] != 'b'){
                        pos++;
                        len--;
                    }
                    if (pos == i){
                        len = 0;
                        k1 = k;
                        continue;
                    }
                    pos++;
                }
            }
            if (maxlen < len) maxlen = len;
            //cout << i << " " << len << " " << pos << endl;
        }
    }
    //cout << "---" << endl;
    //string b
    k1 = k;
    len = 0;
    pos = 0;
    j = 0;
    if (j < n-1){
        pos = j;
        len = 1;
        if (s[j] != 'b') k1--;

        for (long i = j+1; i < n; i++){
            if (s[i] == 'b'){
                len++;
            }
            else{
                if (k1 > 0){
                    k1--;
                    len++;
                }
                else{
                    while (s[pos] != 'a'){
                        pos++;
                        len--;
                    }
                    if (pos == i){
                        len = 0;
                        k1 = k;
                        continue;
                    }
                    pos++;
                }
            }
            if (maxlen < len) maxlen = len;
            //cout << i << " " << len << " " << pos << endl;
        }
    }
    cout << maxlen << endl;
}
