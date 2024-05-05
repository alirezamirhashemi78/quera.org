#include<iostream>
#include<cmath>

using namespace std;


int reverse_number(int number);
int print_digits_rtl(int number);

int main(){
	
	int number, tmp, reminder;
	int result = 0;
	do{
		cin >> number;
		tmp = reverse_number(number);
		while(tmp != 0){
			reminder = tmp % 10;
			if(reminder == 0){
				result *= 10;
			} else {
				result = result * 10 + reminder;
				tmp /= 10;
			}

		}

	}
	while(number != 0);
	
	print_digits_rtl(result); 
	
	return 0;
}

int reverse_number(int number){
	int reminder;
	int reversed_number = 0;
	do{
		reminder = number % 10;
		reversed_number = reversed_number * 10 + reminder;
		number /= 10;
	}
	while(number != 0);
	
	return reversed_number;	
}

int print_digits_rtl(int number){
	while(number != 0){
		cout << number % 10 << endl;
		number /= 10;
	}

	
}
