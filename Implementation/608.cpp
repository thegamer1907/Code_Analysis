#include <iostream>
using namespace std;


int tabel[52];

int main (){


    int i,m,n, lulus;

    cin>>m>>n;

    for (i=1; i<=m; i++){
        cin>>tabel[i];
        }
	
	lulus=0;
    for (i=1; i<=m; i++){
        if ((tabel[i]>= tabel[n])&&(tabel[i]>0))
            lulus=lulus+1;
        }

    cout<<lulus<<endl;

    return 0;

    }
