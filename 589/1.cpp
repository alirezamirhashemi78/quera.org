#include <iostream>

using namespace std;

int main(){
    int n;
    int s = 1;
    cin >> n;

    for(int i=n; i>0; i--){
        s *= i;
    }

    cout << s;

    return 0;
}