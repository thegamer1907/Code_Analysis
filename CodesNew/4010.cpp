#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long>warriors;


long long bin(long long a, long long b, long long val){

    if(b < a){
        return a;
    }
    if(b == a){
        return a;
    }

    if(b-a == 1){
        if(warriors[a] == val) return a;
        else return b;
    }

    long long middle = (a+b)/2;

    if(warriors[middle] == val)return  middle;
    else if(warriors[middle] <val) return bin(middle+1, b, val);
    return bin(a, middle-1, val);
}

int main(){

    long long n,q;
    long long temp, last =0;
    cin >> n >>q;
    for(int i = 0; i < n;i++){
            cin>>temp;
        if(i == 0){
            warriors.push_back(temp);
        }else{
            warriors.push_back(temp + warriors[i-1]);
        }
    }

    long long index;

    for(int  i =0 ; i<q; i++){

        cin >> temp;
        temp +=last;

        if(temp >= warriors[warriors.size()-1]){
            cout << n << endl;
            last =0;
        }else{
            index = bin(0, warriors.size()-1, temp);

            while(index >0 && warriors[index] > temp) index--;

            if(index == 0 && warriors[0] > temp){
                cout << n <<endl;

            }else{
            if(n-index-1 == 0) {
                cout << 1 <<endl;
            }else

            if( n - (index+1) <1){
                cout <<n <<endl;
            }else
                cout << n - (index+1) << endl;
            }
            last = temp;
        }

    }



    return 0;


}
