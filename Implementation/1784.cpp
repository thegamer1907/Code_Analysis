#include <iostream>
//#define 
//#define
#define forj(i) for(int j=0;j<(i);j++)
#define fori(n) for(int i=0;i<(n);i++)
using namespace std;

int main() {
	string f;
	cin >> f;
	int u=f.length();
	bool ans=true;
	fori(u) {
		if(f[i]=='1')
			if(f[i+1]=='1')
				if(f[i+2]=='1')
					if(f[i+3]=='1')
						if(f[i+4]=='1')
							if(f[i+5]=='1')
								if(f[i+6]=='1')
									ans=false;
		if(f[i]=='0')
			if(f[i+1]=='0')
				if(f[i+2]=='0')
					if(f[i+3]=='0')
						if(f[i+4]=='0')
							if(f[i+5]=='0')
								if(f[i+6]=='0')
									ans=false;
	}
	if(ans==false)
		cout << "YES";
	else
		cout << "NO";
}