#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;

	long long home[4]={0}, store[4]={0}, req[300]={0};
	long long st = 1,dr = 1000000000000000, rubla;
	
	for(int i = 0 ; i < s.length(); i++){
		req[(int)s[i]]++;
	}
	
	for(int i = 0; i < 3; i++)
		cin >> home[i];
	
	for(int i = 0; i < 3; i++)
		cin >> store[i];	
	cin >> rubla;
	while(st <= dr-5){
		
		long long mid = (st + dr)/2, rubla1 = rubla;
		long long req_b = req['B']*mid, req_s = req['S']*mid, req_c = req['C']*mid;
		//cout << "R :" << req_b << " " << req_s << " " << req_c << "\n";
		req_b -= home[0], req_s -= home[1], req_c -= home[2];
		rubla1 -= max(0LL,req_b*store[0]);
		rubla1 -= max(0LL,req_s*store[1]);
		rubla1 -= max(0LL,req_c*store[2]);
		//cout << "st :" << st << " " << dr << " " << rubla << "\n";
		if(rubla1 > 0){
			st = mid;
		}else{
			dr = mid;
		}
	}
	//cout << st << " " << dr << "\n";
	while(dr >= st){
		long long mid = dr, rubla1 = rubla;
		long long req_b = req['B']*mid, req_s = req['S']*mid, req_c = req['C']*mid;
		req_b -= home[0], req_s -= home[1], req_c -= home[2];
		rubla1 -= max(0LL,req_b*store[0]);
		rubla1 -= max(0LL,req_s*store[1]);
		rubla1 -= max(0LL,req_c*store[2]);
		if(rubla1 >= 0){
			cout << dr;
			return 0;
		}
		dr--;
	}
	cout << 0;
	return 0;
}
