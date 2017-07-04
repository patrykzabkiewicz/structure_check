#include <iostream>
#include "advanced.h"

using namespace std;

int main() {

    cout << "start..." << endl;

    if(check()) {
        cout << "good" << endl;
    } else {
        cout << "bad" << endl;
    }

    cout << "end..." << endl;

    return 0;
}