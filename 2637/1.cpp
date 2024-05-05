#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int input;
	
	cin >> input;
	
	int x = floor(input / 2 );
	
	int result = (input - x + 1 ) * (x + 1);
	
	cout << result;
	
	return 0;
}
