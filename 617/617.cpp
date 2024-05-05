#include <iostream>

using namespace std;

int main(){
	
	int n, rev=0;
	
	cin >> n;
	const int orginalNumber = n;
	while(n != 0){
		rev = (rev * 10) + (n % 10);
		n = n / 10;
	}
	
	if(orginalNumber == rev){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}
