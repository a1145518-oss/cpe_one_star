#include <iostream>
using namespace std;

int main()
{
    int bottles;
    while (cin >> bottles) {
        int empty_bottles = bottles;
        int total_bottles = bottles;

        while (empty_bottles > 2) {
            total_bottles += empty_bottles / 3;
            empty_bottles = empty_bottles / 3 + empty_bottles % 3;
        }
        cout << total_bottles + (empty_bottles == 2) << endl;
    }

    return 0;
}