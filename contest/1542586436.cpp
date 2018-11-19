#include<iostream>
#include<string>
using namespace std;

int main(){


string m;

cin>>m;

int n;
cin>>n;

string vect[n];


for(int i=0;i<n;i++){

    cin>>vect[i];


}


for(int i=0;i<n;i++){


    if(m[0]==vect[i][1]){

        for(int j=0;j<n;j++){


            if(m[1]==vect[j][0]){

                cout<<"YES";
                return 0;


            }

        }


    }



    if(m[0]==vect[i][0]){


            if(m[1]==vect[i][1]){

                cout<<"YES";
                return 0;

            }
    }


}

















cout<<"NO";
return 0;





}
