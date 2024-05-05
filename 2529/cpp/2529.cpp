#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int checkLetter (string ltr){
    sort(ltr.begin(), ltr.end());
    int counter = 0;
    for(int i=0; i<ltr.length(); i++){
        if(ltr[i] != ltr[i+1]){
            counter++;
        }
    }
	return counter;
}

int main()
{
	int n;
	int max_repeat = 0;
	string inp;
	
	cin >> n;
	
	string arr[n];
	
	for(int i=0; i<n; i++){
		cin >> inp;
		arr[i] = inp;
	}
	
	

	for(int i=0; i<n; i++){
		if(checkLetter(arr[i]) > max_repeat){
			max_repeat = checkLetter(arr[i]);
		}
	}

	cout << max_repeat;
	
    return 0;
}

