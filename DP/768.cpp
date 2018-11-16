# include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];

   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
int main(){
  int size;
  cin>>size;
  int arr[size];
  int arr1[size];
  int sum = 0;
  for (size_t i = 0; i < size; i++) {
    cin>>arr[i];
    sum += arr[i];
    if(arr[i] == 0){
      arr1[i] = 1;
    }
    else
    arr1[i] = -1;

  }
cout<<sum + maxSubArraySum(arr1, size)<<endl;
}
