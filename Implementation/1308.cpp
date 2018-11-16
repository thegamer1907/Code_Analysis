#include <iostream>

using namespace std;

int main()
{
    int counter,time;
    cin>>counter>>time;
    char arr[counter];
    for(int i=0;i<counter;i++)
    cin>>arr[i];
   for(int i=0;i<time;i++){
    for(int i=0;i<counter;i++){
            if(arr[i]=='B'&&arr[i+1]=='G'){
            swap(arr[i],arr[i+1]);
            i++;
            }
    }
   }
   for(int i=0;i<counter;i++)
    cout<<arr[i];
   cin>>counter;
    return 0;
}
