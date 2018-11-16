#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int k=0;
    int c=0;
    cin >> n;
    cin >> k;
    int lista[n];
    for(int i=0;i<n;i++){
        cin >> lista[i];
    }
    for(int i=0;i<n;i++){
        if(lista[i]>=lista[k-1]&&lista[i]>0){
            c++;
        }
    }

    cout << c << endl;
    return 0;
}
