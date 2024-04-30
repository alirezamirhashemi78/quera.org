#include <iostream>

using namespace std;

string operator * (string a, unsigned int b){
    string output = "";

    while(b--){
        output += a;
    }

    return output;
}


int main(){
    int n;
    cin>>n;
    cout << "W" + (string)"o"*n + "w!";
    return 0;
}