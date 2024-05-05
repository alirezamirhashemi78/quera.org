#include<iostream>
#include<cmath>

using namespace std;

int reverse_number(int number);
int print_digits_rtl(int number);

int main(){
	
	int number;
	int c = 1;
	int result = 0;
	
	do{
		cin >> number;
		result += number * c;
		c *= pow(10, int(log10(result) + 1));
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
	int r_number = reverse_number(number);
	while(r_number != 0){
		cout << r_number % 10 << endl;
		r_number /= 10;
	}
	
}
