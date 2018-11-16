#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100];
    cin >> a;
    if(strstr(a, "1111111") || strstr(a, "0000000")) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
