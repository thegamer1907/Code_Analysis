#include <cstdio>
#include <string.h>

using namespace std;

int main(){

    int n,m;
    char cad[100];
    scanf("%d%d",&n,&m);

    scanf("%s",cad);

    for(int i=0;i< m; i++){
        for(int j=0;j<n-1;j++){
            if(cad[j]=='B' && cad[j+1]=='G'){
                cad[j]='G';
                cad[j+1]='B';
                j++;
            }
        }
    }

    printf("%s",cad);
    return 0;
}
