#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,m,t=0,temp=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for(int j=0;j<m;j++){
		cin >> b[j];
	}
	
	for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m-i-1;j++){
            if (b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
	
	
	for(int i=0;i<n;i++){
		//cout << a[i];
		for(int j=0;j<m;j++){
			//cout << a[i] << " " << b[j] << endl;
			if(a[i]==b[j] || a[i]+1==b[j] || a[i]-1==b[j]){
				t++;
				b[j]=-1;
				break;
			}
		}
	}
	cout << t;
}