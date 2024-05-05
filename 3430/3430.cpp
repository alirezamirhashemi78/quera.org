#include <iostream>

using namespace std;

int main(){
	
	string inputText;
	
	cin >> inputText;
	
	for(int i=0; i<inputText.size(); i++){
		for(int j=0; j<=i; j++){
			inputText[j] = inputText[i];
		}
		cout << inputText << endl;
	}
	
	return 0;
}
