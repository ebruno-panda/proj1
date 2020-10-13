#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string contestar; //(5) | stores user input
        getline(cin, contestar); //(1)

        int N = 26 + (2935002 % 11); //(2) ID has a 0 in front | N = 26 + 4 |base N = 30
  
        /*Outputs 0 if input length > 10*/
        if (contestar.length() > 10){cout << 0 << endl;} //(3)
        else { //(4)
