#include <iostream>
using namespace std;
int main()
{
    int n,k,x,sol=0,y;
    cin >>n>> k;
    n-=k;
    while(k--){
        cin >> x;
        if(x>0) ++sol;
        else break;
    }
    while(n--){
        cin >> y;
        if(x == y && y) ++sol;
        else break;
    }
    cout << sol;
    return 0;
}