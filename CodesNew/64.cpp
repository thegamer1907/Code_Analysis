#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>

double buscar_max(double lamparas[], int n, int l, double maximo){
	for(int i=1;i<n;i++){
        double a = (lamparas[i]-lamparas[i-1])/2.0;
        if (a>maximo) {
        	maximo = a;
        }
    }
    double ultimo = l-lamparas[n-1];
    if (ultimo>maximo) {
    	maximo = ultimo;
    }
    return maximo;
}

using namespace std;
int main() {
    int n, l;
    cin >> n >> l;
    double lamparas[n];
    for(int i=0;i<n;i++){
        cin >> lamparas[i];
    }
    sort(lamparas,lamparas+n);

    double maximo = buscar_max(lamparas, n, l, lamparas[0]);

    cout << setprecision(9) << maximo << endl;
    return 0;
}
// 1538791238385
