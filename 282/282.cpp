#include<iostream>

using namespace std;

int main(){
	
	int number;
	int sum = 1;
	
	cin >> number;
	
	for(int i=2; i<number; i++){
		if(number % i == 0){
			sum += i;
		}
	}
	
	if(sum == number){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}
