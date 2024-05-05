#include <iostream>

using namespace std;

int main(){
	
	int n, m;
	string userInput;

	int starCounter = 0;
	cin >> n >> m;
	
	
	for(int i=0; i<n; i++){
		cin >> userInput;
		for(int i=0; i<m; i++){
			if(userInput[i] == '*'){
				starCounter++;
		}
	}
	}
	

	
	cout << starCounter;
	
	
	return 0;
}
