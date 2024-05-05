#include<iostream>

using namespace std;

int main(){
	

	string input;
	char green = 'G';
	char red = 'R';
	char yellow = 'Y';
	int g_counter = 0;
	int r_counter = 0;
	int y_counter = 0;	
	cin>>input;



	for(int i=0; i<=input.length(); i++){
		if(input[i] == green){
			g_counter ++;
		}
		if(input[i] == red){
			r_counter ++;
		}
		if(input[i] == yellow){
			y_counter ++;
		}
	}	
	
	if((r_counter == 5 || y_counter == 5) || ( r_counter >= 3 ) || ( r_counter >=2 && y_counter >= 2) || (r_counter == 1 && y_counter == 4)){
		cout<<"nakhor lite";
		
	}else {
		cout<<"rahat baash";
	}

	return 0;
}
