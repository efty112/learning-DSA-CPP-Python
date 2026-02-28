#include <iostream>
#include <string>
using namespace std;

int main(){
    string givenStr;
    cin >> givenStr;

    int hashArray[256] = {0};
    for (int i=0; i<givenStr.length(); i++){
        int charVal = givenStr[i];
        hashArray[charVal]++;
    }

    char ch;
    while (true){
        cin >> ch;
        int chVal = ch;
        cout << hashArray[chVal] << endl;
    }

    return 0;
}