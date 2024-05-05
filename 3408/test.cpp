//#include<iostream>
//
//using namespace std;
//
//int main(){
//	
//	string txtArray[2] = {};
//	string txt = "";
//	
//	txt += 'a';
//	txt += 'a';
//	txt += 'a';		
//	cout << txt << endl;
//	
//	txtArray[0] = txt;
//	cout << *txtArray;
//
//}

#include<iostream>

using namespace std;

int main(){
	
	int n;
	string txt;
	string word = "";
	string txtArray[n] = {};
	
	
	cin >> n;
	cin.ignore();
	getline(cin, txt);
	
	for (int i=0; i<=txt.length(); i++){
		if (txt[i] != ' '){
			word += txt[i];
		} else {
//			txtArray[arrayIndex] = word;
//			arrayIndex++;
//			word = "";
		}
	}



}

//I Am from Iran it iS rainy and i like rain
