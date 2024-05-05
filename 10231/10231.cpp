#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string myStr;
	
	int lines[5] = {0, 0, 0, 0, 0};
	
	
	for(int i=0; i<5; i++){
		cin >> myStr;
		if (myStr.find("HAFEZ") != std::string::npos || myStr.find("MOLANA") != std::string::npos ){
			lines[i] = i+1;
		}
		
	}
	
	for(int i=0; i<5; i++){
		if(lines[i] != 0)
		cout << lines[i] << " ";
	}
	

	
	
	return 0;
}
