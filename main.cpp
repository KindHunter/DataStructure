#include "iostream"
#include <cstring>
#include "sstream"
using namespace std;
int main(){
    short num;
    cin >> num;
    string input;
    string * inputArr = new string[num]{};
    for (int i = 0; i < num; ++i) {
        cin >> input;
        inputArr[i] = input;
    }
    for (int j = 0; j < num; ++j) {
        inputArr[j]
    }

    cout << "YES" << endl;
    cout << "NO" << endl;
}