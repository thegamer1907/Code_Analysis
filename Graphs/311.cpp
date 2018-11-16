#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    cin.ignore();
    string s;
    getline(cin,s); int l=s.length(),k=0;
   string res="";
    for(int i=0;i<t;i++){
        int j=0;
        for( j=0;j<l-1;j++){
            if(s.at(j)=='B' && s.at(j+1)=='G'){
                res=res+"GB"; j++;
            }
            else
            res=res+s.at(j);
        }
        if(j==l-1)
        res=res+s.at(j);
        
         s=res;
        res="";
    }
   
    cout<<s;
	return 0;
}