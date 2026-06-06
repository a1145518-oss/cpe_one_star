#include <iostream>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
    int test_case = 0;
    cin >> test_case;
    getchar();
    getchar();
    while (test_case--)
    {
        int counter = 0;
        map <string, double> Hardwood;
        string tree;
        while (getline(cin, tree) && tree != "")
        {
            counter++;
            Hardwood[tree]++;
        }
        for (map<string, double>::iterator it = Hardwood.begin(); it != Hardwood.end(); it++)
        {
            cout << it->first << " " << setprecision(4) << fixed << it->second * 100.0 / counter << endl;
        }
        if (test_case)
            cout << endl;
    }
    return 0;
}
