#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int input;
	string haft_sin[7] = {"sib", "samanoo", "serke", "senjed", "sir", "seke", "somagh"};
	
	cin>>input;
	
//	cout<<sizeof(haft_sin) / sizeof(string);
	
	for(int i=0; i<input; i++){
		cout<<haft_sin[i]<<endl;
	}
	
	return 0;
}
