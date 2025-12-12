#include<iostream>
using namespace std;

int main(){
    int n;
    int evenCount = 0;
    int oddCount = 0;

    while (true) {
        cout << "Enter an integer: ";
        cin >> n;

        if (n == 0) {
            break; 
        }

        if (n % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}
