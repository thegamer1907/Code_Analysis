#include<cstdio>
using namespace std;
int main(){
   char a[5],b[200][5];
   scanf("%s",a);
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;++i) scanf("%s",b[i]);
   for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
         if(b[i][0]==a[0] && b[i][1]==a[1] || b[i][1]==a[0] && b[j][0]==a[1]){
            puts("YES");
            return 0;
         }
      }
   }
   puts("NO");
   return 0;
}
