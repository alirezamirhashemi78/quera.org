#include <iostream>

using namespace std;

int main(){
	
	int a, b, c;
	int result;
	
	cin >> a >> b >> c;
	

	if(c % 2 == 0){
//		result = (a * (c / 2)) + (b * (c / 2));
		result = (c / 2) * (a + b);
	} else {
		result = (a * ((c / 2) + 1)) + (b * (c / 2));
	}
	
	cout << result;


	return 0;
}
