//even.cpp
//Lamug , Rodolfo
//rlamug

#include <iostream>
using namespace std;

int main() {

        int number;
        bool all_even = true;

        while (cin >> number) {

                if (number %2 != 0){
                        all_even = false;
                }
        }

        if (all_even == false) {
                cerr << "not all even" << endl;
                return 1;
        }

        else {
                cout << "all even" << endl;
                return 0;
        }
}
