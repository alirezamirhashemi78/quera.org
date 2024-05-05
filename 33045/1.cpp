#include<iostream>

using namespace std;

int main(){
	
	
	int n;
	
	cin >> n;
	
	int count = n+1;

	int s = n*2;
	
	for(int i=2; i<n; i++){
		for(int j=2; j<=i; j++){
			if (i%j == 0){
				count += 1;
				s += j;
			}

		}
	}
	
	cout <<count << " " << s;
	
	
	return 0;
}
