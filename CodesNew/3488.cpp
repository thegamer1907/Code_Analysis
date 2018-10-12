#include <iostream>
#include <cmath>
#define INF 1<<30
using namespace std;

int maxi(int a, int b){
    if(a>b) return a;
    return b;
}

int mini(int a, int b){
    if(a<b) return a;
    return b;
}

int arr[105];

int getMinMax(int &a, int &b, int size){
    int min = INF, max = 0;
    int ind = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
            ind = i;
        }
        if(arr[i] > max) max = arr[i];
    }
    a = min; b = max;
    return ind;
}

int main(int argc, char* argv[])
{
    double a, b;
    cin >> a >> b;
    int min = INF, max = 0;
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int index = getMinMax(min, max, a);
    int ans = min;
    int gMax = max;
    int B = b;
    while(b>0){
        if(max == min){
            ans = min+ceil(b/a);
            break;
        }else{
            arr[index] += mini(max-min, b);
            b -= mini(max - min, b);
        }
        index = getMinMax(min, max, a);
        ans = max;
    }
    cout << ans << " " << gMax+B << endl;
    return 0;
}
