#include<iostream>

using namespace std;

int main(){
	int tempertaure;
	
	cin >> tempertaure;
	
	if(tempertaure > 100){
		cout << "Steam";
	} else if(tempertaure < 0){
		cout << "Ice";
	} else {
		cout << "Water";
	}
	return 0;
}
