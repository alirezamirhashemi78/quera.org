#include <iostream>

using namespace std;

int main(){
	
	int x;
	
	int inputs[6] = {};
	int inputs_size = sizeof(inputs)/ sizeof(int);
	
	for(int i=0; i<inputs_size; i++){
		cin >> x;
		inputs[i] = x;
	}
	
	int items[6] = {1, 1, 2, 2, 2, 8};
	int items_size = sizeof(items)/ sizeof(int);
	
	for(int i=0; i<items_size; i++){
		cout << items[i] - inputs[i] << " ";
	}
	
	
	return 0;
}
