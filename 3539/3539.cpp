#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double inputNumber;
	int sum = 0;
	int counter = 0;
	cin >> inputNumber;
	

	int firstDigitCount = (log10(inputNumber) + 1);
	
	while (inputNumber > 0){
		cout << "number aval: "<<inputNumber <<endl;
		sum += inputNumber % 10;
		inputNumber /= 10;
		
		counter ++;	

		cout << "Sum aval: "<<sum <<endl;

		if ((counter == firstDigitCount)){

			if(sum/10 > 0){
				inputNumber = sum;
	
				firstDigitCount = (log10((int)inputNumber) + 1);
				sum = 0;
				counter = 0;
			}


		}	
	} 

	cout << sum;
	
	return 0;
}
