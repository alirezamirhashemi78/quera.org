#include<iostream>
#include <cmath>

using namespace std;

int main(){
	
	int number;
	int result = 0;
	int p = 0;
	cin >> number;
	
	while(result <= number){
		result = pow(2, p);
		p += 1;
	}
	
	cout << result;
	
	
	return 0;
}
