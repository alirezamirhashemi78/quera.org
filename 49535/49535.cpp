#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	string a;
	
	getline(cin, a);
	
	string strNum = "";
	for(int i=0; i<a.length(); i++){
//		int num;
		if(a[i] != ' '){
			strNum += a[i];
		} else {
//			num = atoi(strNum.c_str());
			cout << strNum <<endl;
			strNum = "";
			
		}

	}


	return 0;
}
