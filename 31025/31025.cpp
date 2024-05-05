#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float n; 
	int k;
	
	cin >> n;
	cin >> k;
	
	for(int i=0; i<k; i++){
		n = n / 2;
	}
	// get the largest possible integer less than or equal to 68.95
	cout << (int)floor(n);
	
	return 0;
}

// Output: 68
