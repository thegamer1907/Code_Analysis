#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

template<typename T>
void Swap(T &x,T &y){
    T z = x;
    x = y;
    y = z;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;

    for(int i = 0;i<t;i++){
        int j = 0;
        while(j<n-1){
            if(s[j]=='B'){
                if(s[j+1]=='G'){
                    Swap(s[j],s[j+1]);
                    j = j + 2;
                }
                else j++;
            }
            else j++;
        }
    }
    cout << s << endl;

}
