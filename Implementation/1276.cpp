  #include<iostream>
  #include<algorithm>
  #include<math.h>
  #include<vector>
  // #define for(i,n) for(int i=0;i<n;i++)
 using namespace std;

 char *a;

 int main() {
   int n,t;
   cin>>n>>t;
   a = (char*)malloc(n*sizeof(char));
   for(int i=0;i<n;i++) {
     cin>>a[i];
   }
   for(int i=1;i<=t;i++) {
     for(int j=0;j<n-1;j++) {
       if(a[j] < a[j+1]) {
         char temp = a[j];
         a[j] = a[j+1];
         a[j+1] = temp;
         j++;
       }
     }
   }

   for(int i=0;i<n;i++) 
   cout<<a[i];
   cout<<endl;
}