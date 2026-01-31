```cpp
// Random-password-generator-using-cpp
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    string chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*";

    int length;

    cout << "Enter password length: ";
    cin >> length;

    srand(time(0)); // seed for randomness

    cout << "Generated Password: ";

    for(int i = 0; i < length; i++) {
        int index = rand() % chars.length();
        cout << chars[index];
    }
return 0;
}
```

