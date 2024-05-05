#include <iostream>

using namespace std;


int main(){
	
	int a, b, c;
	int tmp;
	
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	int nums[3] = {a, b, c};
	int arr_size = (sizeof(nums)/sizeof(*nums));

	for(int i=0; i<arr_size; i++){
		for(int j=0; j<arr_size - i-1; j++){
			if(nums[j] > nums[j+1]){
				tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;
			}			
		}

	}
	
	int sum = 0;
	
	for(int i=0; i<arr_size-1; i++){
		sum +=  nums[i]*nums[i];
	}
	
	int lastNum = nums[arr_size-1];

	if(sum == lastNum*lastNum){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}


