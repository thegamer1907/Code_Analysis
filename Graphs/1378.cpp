#include <iostream>
using namespace std;

int main(){
	int noOfCells, target, sw=0;
	std::cin >> noOfCells >> target;
	int Cells[noOfCells];
	Cells[noOfCells-2] = 1;
	for(int i=0;i<noOfCells-1;i++){
		std::cin >> Cells[i];
	}
	for(int j=0;j<noOfCells;j+=Cells[j]){
		if(j == target-1) {sw=1;break;}
		else if(j > target-1) break;
	}
	
	if(sw==0) std::cout << "NO";
	else std::cout << "YES";
	return 0;
}
