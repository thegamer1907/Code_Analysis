#include<bits/stdc++.h>
#define MAX 1000000005
using namespace std;
typedef vector< vector <int> > matrix;
int ctoi(char c) {
	switch(c) {
		case '0':return 0;
		case '1':return 1;
		case '2':return 2;
		case '3':return 3;
		case '4':return 4;
		case '5':return 5;
		case '6':return 6;
		case '7':return 7;
		case '8':return 8;
		case '9':return 9;
	}
}
int main() {

            int n,m,i;
            cin>>n>>m;
            map<string,int> m1,m2;
            string s;
            for(i=0;i<n;i++) {
                cin>>s;
                m1[s]=1;
            }
            for(i=0;i<m;i++) {
               cin>>s;
                m2[s]=1;
            }
            int cnt=0;
            map<string,int>::iterator it;
            for(it=m1.begin();it!=m1.end();it++) {
                    if(m2.find((*it).first)!=m2.end()) cnt++;
            }
            if(cnt%2!=0) {
                    if(n>=m)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                    return 0;
            }
            else {
                    if(n<=m)
                        cout<<"NO"<<endl;
                    else
                        cout<<"YES"<<endl;
                    return 0;
            }
            return 0;
    }




