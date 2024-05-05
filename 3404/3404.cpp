#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	
	int weightInKilograms;
	float heightInMeters; 
    float BMI;
    
    cin >> weightInKilograms;
    cin >> heightInMeters;
    
    BMI = weightInKilograms / (heightInMeters * heightInMeters);
    
    printf("%.2f", BMI);
	cout << endl; 
    
    if(BMI < 18.5){
    	cout << "Underweight";
	}else if(BMI >= 18.5 && BMI < 25){
		cout << "Normal";
	}else if(BMI >= 25 && BMI < 30){
		cout << "Overweight";
	}
	else if(BMI > 30){
		cout << "Obese";
	}
 
    // Directly print the number with .2f precision

    return 0;
}
