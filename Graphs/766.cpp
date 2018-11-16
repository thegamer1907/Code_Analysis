#include <iostream>
using namespace std;
#include <string.h>
int main (){

    char arr[55];
    int x,y,temp;
    cin>>x>>y;
    cin>>arr;


        for (int k=0;k<y;++k){
             for (int i =0;i<x;++i){
            if (arr[i]<arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                i++;
            }
        }

        }
        cout<<arr;

return 0;
}
