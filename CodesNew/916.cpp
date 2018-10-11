#include <iostream>
#include <iomanip>
#include <vector>



using namespace std;
int n,m,c;
string s[3][1004];
int main(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
            cin >> s[0][i];
    for(int i = 0 ; i < m ; i++)
            cin >> s[1][i];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            if(s[0][i] == s[1][j])
                    c++;
    n -= (c / 2) , m -= ((c + 1) / 2);
    //cout << c << " "<< n << " " << m << endl;
    if(n > m) cout << "YES" << endl;
    else cout << "NO" << endl;

}
