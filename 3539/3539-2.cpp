#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	unsigned long long int inputNumber;
	int sum = 0;
	int counter = 0;
	cin >> inputNumber;
	

	int firstDigitCount = (log10(inputNumber) + 1);
	
	if(firstDigitCount > 18){
		firstDigitCount--;
	}
	
	while (inputNumber > 0){
		sum += inputNumber - (inputNumber / 10 * 10);
		inputNumber /= 10;
		
//		cout << "inputNumber: " << inputNumber << endl;
//		cout << "SUM: " << sum << endl;
//		cout << "firstDigitCount: " << firstDigitCount << endl;
//		cout << endl;
		if (firstDigitCount == 1){
//			cout << "man injam: " << endl;

			if(int(log10(sum) + 1) > 1){
				
				inputNumber = sum;
				firstDigitCount = (log10(inputNumber) + 1) +1;
				sum = 0;
			
			}


		}
		firstDigitCount--;	
	}

	
	cout << sum;
	
	return 0;
}
