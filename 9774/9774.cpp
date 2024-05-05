#include<iostream>

using namespace std;

int main(){
	
	string myNumber;
	
	cin >> myNumber;
	
	for(int i = 0; i < (myNumber.size()); i++){
		
		cout << myNumber[i] << ": " ;
		for(int j = 0; j<((int)myNumber[i] - 48); j++){
			cout << myNumber[i];
		}
		cout << endl;
	}
	
	return 0;
}
