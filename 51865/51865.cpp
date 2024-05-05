#include<iostream>

using namespace std;

 int main(){
 	int score, days;
 	
 	cin >> score;
	cin >> days;
	
	switch(days){
		case 0:
			cout << 20;
			break;
		case 7:
			cout << score;
			break;
		default:
			score -= days;
			if(score < 0){
				score = score + (-1 * score);
			}
			cout << score;
			break;
	} 
 	
	return 0;
 }
