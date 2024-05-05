#include<iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main(){
	
	
	string input;
	
	getline(cin, input);


	string generatedStr = "";

	int sum = 0;
	int mul = 1;
	int flag = 1;

	
	for(int i=0; i<=input.size(); i++){

		if(input[i] != ' '){
			generatedStr += input[i];
		} else if (input[i] == ' '){
		 	stringstream streamNumber;
		 	int number = 0;
			streamNumber << generatedStr;
    		streamNumber >> number;
    		sum += number;
			mul *= number;
			generatedStr = "";


		}
		
	} 
	
	int number = 0;
	stringstream streamNumber;
	streamNumber << generatedStr;
	streamNumber >> number;
	mul *= number;
	sum += number;
	
	
	if(flag == 1 && sum == 180 && mul != 0){
		cout << "Yes";
	} else {
		if(flag == 1){
			cout << "No";			
		}

	}

	
	return 0;
}
