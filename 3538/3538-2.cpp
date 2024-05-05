#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	string week_days[7] = {"shanbe", "1shanbe", "2shanbe", "3shanbe", "4shanbe", "5shanbe", "jome"};
	
	int days_count;
	string day;
	vector<string> uniqueUsersDays;
	bool isInVect;
	uniqueUsersDays.push_back("shanbe");
	uniqueUsersDays.push_back("1shanbe");
	
	
//	cout << "Output of begin and end: ";
//	string vectorElement = uniqueUsersDays.at(0);
//	cout << uniqueUsersDays.at(0);
//	for(int i=0; i<uniqueUsersDays.size(); i++){
//		cout << uniqueUsersDays.at(i);
//	}
	
	string days = "shanbe 1shanbe";
	cout << days.size();
	cout << days[14];

	
	return 0;
}
