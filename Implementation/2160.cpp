#include <iostream>

using namespace std;

int main()
{
    int a,b,c,aa,bb,cc,n,l;
    cin >> n;
    aa=0;bb=0;cc=0;l=0;
for(int i=0;i!=n;++i){
    cin >> a >> b >> c;
    aa+=a;
    bb+=b;
    cc+=c;
}
 if ((aa==0)&&(bb==0)&&(cc==0)){cout << "YES";} else {cout << "NO";};

}