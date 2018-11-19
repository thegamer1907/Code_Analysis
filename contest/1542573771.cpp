#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    int n, tr=0,t=0,r=0;
    cin >> n;
    while(n--) {
        cin >> b;
        if(b[0]==a[0] && b[1]==a[1] || b[0]==a[1] && b[1]==a[0]) tr=100;
        else if(b[0]==a[1]) r++;
        else if(b[1]==a[0]) t++;
    }
    if(tr || r && t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
