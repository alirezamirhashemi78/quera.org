#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(){
	
	string week_days[7] = {"shanbe", "1shanbe", "2shanbe", "3shanbe", "4shanbe", "5shanbe", "jome"};
	
	int days_count;
	string days;
	vector<string> usersDaysVector;
	bool isInVect;
	
	for(int i=0; i<3; i++){

		isInVect = false;
		cin >> days_count;
		cin.ignore();
		getline(cin, days);
		string day = "";

		for(int i=0; i <= days.size(); i++){
			if(days[i] != ' ' ){
				day += days[i];
			}
			if(days[i] == ' ' || i==days.size()) {
				usersDaysVector.push_back(day);
				day = "";
			}
		}

	}
	
	
	set<string> s;
	for (int i=0; i<=usersDaysVector.size(); i++)
	    s.insert(usersDaysVector[i]);
	usersDaysVector.assign( s.begin(), s.end() );

	
	for(int i=0; i<usersDaysVector.size(); i++){
		cout << usersDaysVector.at(i) << " ";
	}

	
	return 0;
}
