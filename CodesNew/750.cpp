#include <cstring>
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,m;
    while (cin >> n >> m){
        char a[1000][555],b[1000][555],visit[1000][555];
        memset(visit,0,sizeof(visit));
        for (int i=0;i<n;i++){
            scanf("%s",a[i]);
        }
        for (int j=0;j<m;j++){
            scanf("%s",b[j]);
        }
        int z=n,k=m,same=0;
        int n1=n,m2=m;
        for (int i=0;i<z;i++){
            for (int j=0;j<k;j++){
            	if (visit[i][j]==0){
            		char a1[555],b1[555];
					strcpy(a1,a[i]);
					strcpy(b1,b[j]);
	                if (strcmp(a1,b1)==0){
	                	visit[i][j]=1;
	                	n--;m--;
	                	same++;
					}
				}   
            }
        }
        if (n > m || (n == m && same%2==1)){
            cout << "YES" << endl;
            continue ;
        }
        if (m > n || (n == m && same%2==0) ){
            cout << "NO" << endl;
            continue ;
        }
    }
}