#include<iostream>

using namespace std;

string foo(int n);

int main(){
	int n;
	cin >> n;
	cout << foo(n);
	return 0;
}

string foo(int n){
	
	int temp;
	int prev = 1;
	int next = 1;
	int counter = 1;
	
	string my_str = "";
	
	
	do{
		my_str += '+';
		temp = next;
		next += prev;

		prev = temp;
		

		if(next - prev > 1){
			for(int elm=prev+1; elm<next; elm++){
				
				if(counter < n){
					my_str += '-';
				}
	
				counter ++;
			} 
		}

		counter ++;
	}
	while(next <= n);

	return my_str;
}
