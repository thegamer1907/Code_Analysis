#include <bits/stdc++.h>
using namespace std;
int n, k;
string code;

int main() {
    cin>>n>>k;
    cin>>code;

    int li=0, ri=0, cnta=0, cntb=0;
    if(code[0]=='a') cnta++;
    else cntb++;
    int result = 1;
    while(ri<n) {
        if(min(cnta, cntb)<= k) {
            result = max(result ,ri - li +1);
            ri++;
            if(code[ri] == 'a') cnta++;
            else cntb++;
        }
        else if(min(cnta, cntb) > k) {
            if(code[li]=='a') cnta--;
            else cntb--;
            li++;
        }
    }
    cout<<result<<endl;
    return 0;
}
