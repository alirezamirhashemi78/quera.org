#include <iostream>

using namespace std;

bool isPrime(int n);

int main(){
	int n1, n2;
	
	cin >> n1;
	cin >> n2;
	
	for(int i=n1; i<=n2; i++){
		
		if(isPrime(i) == true){
			cout << i << endl;	
		}
		


	}
	
	return 0;
}

bool isPrime(int n){
	bool is_prime = true;
	
	if(n == 0 || n == 1){
		is_prime = false;
	}
	
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0){
			is_prime = false;
		}
	}
	
	return is_prime;
}
