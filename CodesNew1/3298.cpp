#include <iostream>
using namespace std;
int main()
{  
  int numBenches = 0;
  int arr_benches[100] = {0};
  double numComingPeople = 0;
   cin >> numBenches >> numComingPeople;
  int max = 1;
  int min = 100;
  int minPos=0;
  for(int i=0; i<numBenches; i++)
  {
    cin >> arr_benches[i] ;
    if(arr_benches[i] >=max)
        max=arr_benches[i];
  }
  max+=numComingPeople;
  
  for(int i=0; i< numComingPeople; i++)
  {
    for(int j=0; j<numBenches;j++)
    {
      if(arr_benches[j] <= min)
      { 
       min=arr_benches[j];
       minPos=j;     
      }       
    }
    arr_benches[minPos]++;
    min=arr_benches[minPos];
  }
  int maxOfMin=1;
  for(int i=0; i<numBenches; i++)
  {
    if (arr_benches[i] > maxOfMin )
    {
      maxOfMin=arr_benches[i];
    }
  }
  cout << maxOfMin << " " << max;
  return 0;
}