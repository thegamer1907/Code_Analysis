#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

bool myfunction(char i , char j){
  return (int)i>(int)j;

}

int cutoff = 4;

void insertionsort(int a[] , int l , int r){
 
for(int i=l;i<r;i++){
   for(int j=i;j>=l;j--){
        if (a[j+1]<a[j])swap(a[j+1] , a[j]);
         else break;
   }
 }
return;
}

void merge(int arr[] ,int l ,int m ,int r){
   int i ,j ,k;
   int n1 = m-l+1;
   int n2 = r-m;
   int l1[n1] , l2[n2];
   for( i=0;i<n1;i++){
        l1[i] = arr[l+i];     
   } 
   for( i=0;i<n1;i++){
        l2[i] = arr[m+1+i];     
   } 
    i=0 , j=0 ,k=l;
   while(i<n1 && j<n2){
       if(l1[i]<l2[j]){
		arr[k++] = l1[i++];
         }
	else {
		arr[k++] = l2[j++];	
	}
   }
   while(i<n1){
		arr[k++] = l1[i++];
	}
   while(i<n2){
		arr[k++] = l2[j++];
	}
return;
}

void mergesort(int arr[] , int l ,int r){
  int m;
if(l<r - 4 + 1){
 m = l + (r-l)/2;
mergesort(arr , l ,m);
//cout<<l<<" "<<m<<" "<<r<<"t yes\n";
mergesort(arr , m+1 ,r);
//cout<<l<<" "<<m<<" "<<r<<"t no\n";
merge(arr , l , m , r);
}
else {
  insertionsort(arr , l , r);

   
  return;
}

}



int main(){
int n;
cin>>n;
int a[n];
int count = 0;
for(int i=0;i<n;i++){
cin>>a[i];

if(i>0){
  if(a[i]<a[i-1])count = 1;
}
}
if(count==1){mergesort(a , 0 , n-1);}

int j = n/2 - 1 , i= n-1 , sum = 0;
while(j>=0 && i>=n/2){
        
	if(2*a[j] <= a[i]){
                a[j] = 0;
		j--;
		i--;
     		sum++;
	}
        else if(a[i] == 0)i--;
       
	else {
		j--;

		}

}

cout<<n-sum;

return 0;}