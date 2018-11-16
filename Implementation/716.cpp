#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    char ch[n];
    cin >> ch;
    for(int j = 0;j < t ;j++){
        for(int i = n - 1; i > 0;i--){
            if(ch[i] == 'G' && ch[i-1] == 'B'){
                ch[i] = 'B';
                ch[i-1] = 'G';
                i--;
            }
        }
    }
    for(int i = 0; i < n;i++){
        cout << ch[i];
    }
    return 0;
}
