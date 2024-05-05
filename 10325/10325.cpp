#include<iostream>

using namespace std;

int main(){
	
	int r, c, c_steps, r_steps;
	int salon_size = 20;
	cin >> r >> c;
	
	if(c > 10){
		c_steps = (salon_size - r) - (salon_size/2) ;
		r_steps = 11 - r;
		cout << "Left " << r_steps << " " << c_steps;
	} else {
		c_steps = (salon_size/2) - ((salon_size/2) - 1);
		r_steps = (salon_size/2 + 1) - r;
		cout <<"Right " << r_steps << " " << c_steps;
	}
	
	return 0;
}
