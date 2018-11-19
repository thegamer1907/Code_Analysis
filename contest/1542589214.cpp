#include <iostream> 
#include <string.h>  
using namespace std; 
int main() 
{ 
char n[2];

int i,k,j,Chek=0;
cin >> n;
cin >> k;
char M[2][k];
for (i=0;i<k;i++){
    cin >> M[0][i];
    cin >> M[1][i];
    if ((M[0][i]==n[0])&&(M[1][i]==n[1])) Chek=1;
    if ((M[1][i]==n[0])&&(M[0][i]==n[1])) Chek=1;
}
for (i=0;i<k;i++){
    for (j=0;j<k;j++){
        if ((M[1][i]==n[0])&&(M[0][j]==n[1])) Chek=1;
    }
}
if (Chek==1) cout << "YES";
else cout << "NO";


return 0; 
}