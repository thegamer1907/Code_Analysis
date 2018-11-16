#include <iostream>
#include<string>
#include <stdlib.h>
using namespace std;

void process(string name , int length){

    int one = 0 , zero = 0;


    for(int i = 0 ; i < length ; i++){

        if(name.at(i) == '1'){

            zero = 0;
            one++;

            if(one >= 7){

                cout<<"YES"<<endl;

                break;

            }

        }

        if(name.at(i) == '0'){

            one = 0;

            zero++;

            if(zero >= 7){

                cout<<"YES"<<endl;

                break;
            }
        }
    }

    if(one < 7 && zero <7){

        cout<<"NO"<<endl;

    }

}

int main() {

    string binary;

    int zero = 0 , one = 0;

    cin >> binary;

    int length = binary.length();

    if(length <= 100){

        for(int i = 0 ; i < length ; i++){

            if(binary.at(i) == '1'){

                one++;

            }

            if(binary.at(i) == '0'){

                zero++;

            }
        }

        if(one > 0 && zero > 0){

            process(binary,length);

        } else{

            exit(0);

        }

    } else{

        exit(0);

    }

    return 0;
}