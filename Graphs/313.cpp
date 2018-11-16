#include<iostream>

using namespace std;

void swap(char&a,char&b){

    int temp;
    temp = a;
    a = b;
    b = temp;

}

int main()
{
    int n;
    int t;
    cin>>n>>t;

    char* a = new char[n+1];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    while(t-- > 0){
        for(int i=1;i<n;i++){
            if(a[i-1] == 'B' && a[i] == 'G'){
                swap(a[i-1],a[i]);
                i++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
