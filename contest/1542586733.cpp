#include <iostream>
#include <fstream>
using namespace std;

int f[2][2][2][2];
int b[100010][5];
int n, k;

int main(){
    scanf("%d %d", &n, &k);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=4; j++) b[i][j]=0;
        for (int j=1; j<=k; j++){
            scanf("%d", &b[i][j]);
        }
        f[b[i][1]][b[i][2]][b[i][3]][b[i][4]]++;
    }
    if (f[0][0][0][0]>0){
        cout<<"YES"<<endl;
        return 0;
    }
    for (int i=1; i<=n; i++){
        for (int i1=0; i1<=(1-b[i][1]); i1++)
            for (int i2=0; i2<=(1-b[i][2]); i2++)
                for (int i3=0; i3<=(1-b[i][3]); i3++)
                    for (int i4=0; i4<=(1-b[i][4]); i4++)
                        if (i1==b[i][1] && i2==b[i][2] && i3==b[i][3] && i4==b[i][4]){
                            if (f[i1][i2][i3][i4]>1){
                                cout<<"YES"<<endl;
//                                cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<b[i][1]<<" "<<b[i][2]<<" "<<b[i][3]<<" "<<b[i][4]<<endl;
                                return 0;
                            }
                        }
                        else{
                            if (f[i1][i2][i3][i4]>0){
                                cout<<"YES"<<endl;
                                return 0;
                            }
                        }
    }
    cout<<"NO"<<endl;
}
