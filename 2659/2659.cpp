#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int x;
	int counter = 0;
	string a1, a2;
	
	cin >> x;
	cin >> a1;
	cin >> a2;
	
	if(a1.size() != x-1 && a1.size() == a2.size()){
		for(int i=0; i <= a1.size(); i++){
			if(a1[i] != a2[i]){
				counter ++;
			}
		}
	}
	
	cout << counter;

	
	return 0;
}
