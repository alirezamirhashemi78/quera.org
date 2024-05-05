#include<iostream>

using namespace std;

int main(){
	
	int n;
	int arrayIndex = 0;
	string txt;
	string word = "";
	int blankCounter = 0;
	
	cin >> n;
	cin.ignore();
	getline(cin, txt);
	
	string arrayTxt[n];
	
	for (int i=0; i<=txt.length(); i++){
		if (txt[i] != ' '){
			word += txt[i];
		} else {
			blankCounter++;
			arrayTxt[arrayIndex] = word;
			arrayIndex++;
			word = "";
		}
		if(blankCounter = n-1){
			arrayTxt[arrayIndex] = word;
		}
	}
	
	if (sizeof(arrayTxt) / sizeof(arrayTxt[0]) == n){
		cout << arrayTxt[n-1];
		for (int i=n-2; i>=0; i--){
			cout << arrayTxt[i] <<" "; 
		}
		
	}
	

}

//I Am from Iran it iS rainy and i like rain
