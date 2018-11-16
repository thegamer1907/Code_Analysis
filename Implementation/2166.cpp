#include <iostream>

using namespace std;

int main() {
    int a,a1,a2,a3,b1=0,b2=0,b3=0;
    cin >> a;
    for (int i=0;i<a;i++) { cin>>a1>>a2>>a3; b1+=a1; b2+=a2; b3+=a3; }
    if (b1==0 && b2==0 && b3==0) cout<<"YES"; else cout<<"NO";
    return 0;
}