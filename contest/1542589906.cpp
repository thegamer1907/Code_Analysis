#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int n;
char pass[3], dict[100][3];

int main()
{
    scanf("%s",pass);
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s",dict[i]);
        if(dict[i][0]==pass[0]&&dict[i][1]==pass[1]){
            printf("YES\n");
            return 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(pass[0]==dict[i][1]&&pass[1]==dict[j][0]){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
