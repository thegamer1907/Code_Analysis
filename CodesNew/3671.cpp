#include<iostream>
#include<vector>
using namespace std;
vector<int> arr;
int main(){
    int n, m;
    int minimum = 100, maximum = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
        maximum = max(maximum, x);
    }
    int copyM = m;
    int places = 0;
    for(int i = 0; i < arr.size(); i++)
        places += maximum - arr[i];
    if(places >= m) minimum = maximum;
    else {
        m -= places;
        minimum = maximum + m / n;
        if(m % n != 0) minimum++;
    }
    
    maximum += copyM;
    cout << minimum << " " << maximum;
}