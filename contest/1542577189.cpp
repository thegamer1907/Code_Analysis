#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include <iterator>
#include<set>
using namespace std;
typedef long long ll;

int n,k;
int t[100005][5];
int q[5];
int solved[100005];
bool has[16];
int nthbit[4] = {1,2,4,8};
int det(int a){
    switch(a){
        case 1: case 2: case 4: case 8: return 1;
        case 3: case 6: case 12: return 2;
        case 7: case 14: return 3;
        case 15: return 4;
    }
}
bool cmps(int a,int b){
    return det(a)<det(b);
}
bool nohas(){
    for(int i=1;i<16;i++){
        if(has[i])return false;
    }
    return true;
}
int main(){
    scanf("%d%d",&n,&k);
    int A = nthbit[k]-1;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int a; scanf("%d",&a);
            if(a==1)solved[i]|=nthbit[j];
        }
        has[solved[i]]=true;
    }
//     for(int i=0;i<n;i++)printf("%d ",solved[i]);printf("\n");
    if(
        has[0]&&(has[1]||has[2]||has[3]||has[4]||has[5]||has[6]||has[7]||has[8]||has[9]||has[10]||has[11]||has[12]||has[13]||has[14]||has[15])
        ||
        has[1]&&(has[2]||has[4]||has[6]||has[8]||has[10]||has[12]||has[14])
        ||
        has[2]&&(has[1]||has[4]||has[8]||has[5]||has[9]||has[12]||has[13])
        ||
        has[3]&&(has[4]||has[8]||has[12])
        ||
        has[4]&&(has[1]||has[2]||has[3]||has[8]||has[9]||has[10]||has[11])
        ||
        has[5]&&(has[2]||has[8]||has[10])
        ||
        has[6]&&(has[1]||has[8]||has[9])
        ||
        has[7]&&(has[8])
        ||
        has[8]&&(has[1]||has[2]||has[3]||has[4]||has[5]||has[6]||has[7])
        ||
        has[9]&&(has[2]||has[4]||has[6])
        ||
        has[10]&&(has[1]||has[4]||has[5])
        ||
        has[11]&&(has[4])
        ||
        has[12]&&(has[1]||has[2]||has[3])
        ||
        has[13]&&(has[2])
        ||
        has[14]&&(has[1])
        ||
        nohas()
    ) {flag=true;}
    printf((flag?"YES\n":"NO\n"));
    return 0;
}
