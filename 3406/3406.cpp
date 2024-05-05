#include <iostream>
using namespace std;


int getReverse(int num, int rev=0){
    if(num == 0)
        return rev;
    
    int rem = num % 10;
    rev = rev * 10 + rem;
    
    return getReverse(num / 10, rev);
}

int main() {
	
	int n1, n2;
	cin>>n1;
	cin>>n2;
	  
	if(getReverse(n1) > getReverse(n2)){
		cout<<n2<<" < "<<n1;
	} else if(getReverse(n2) > getReverse(n1)){
		cout<<n1<<" < "<<n2;
	} else {
		cout<<n1<<" = "<<n2;
	}
	

  
//  cout<<n1<<endl<<n2;
  
  return 0;
}
