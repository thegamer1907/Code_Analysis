#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define SIZE 30001

int main(void)
{
  int n=0, t=0, it;
  int arr[SIZE];


  scanf("%d %d\n", &n, &t);

  for(int i=1; i<n; ++i)
    scanf("%d ", &arr[i]);

  for(it=1; it<t; it+=arr[it])
  {
  }

  printf("%s\n", (it==t) ? "YES" : "NO");
  return 0;
}
