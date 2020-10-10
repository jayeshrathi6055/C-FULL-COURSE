#include <iostream>
#include <list> //--------------->list declaration
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it; //----------------->It will point the list as a pointer
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    // List in c++---------------------------->
    // Method 1
    list<int> lis;
    lis.push_back(1);
    lis.push_back(3);
    lis.push_back(5);
    lis.push_back(7);
    lis.push_back(9);
    display(lis);
    cout << endl;

    // Method 2
    list<int> lis1(5);
    list<int>::iterator ist;
    ist = lis1.begin();
    *ist = 2;
    ist++;
    *ist = 4;
    ist++;
    *ist = 6;
    ist++;
    *ist = 8;
    ist++;
    *ist = 10;
    display(lis1);
    cout << endl;

    // Some list operation
    lis.pop_back();
    display(lis);
    cout << endl;

    lis.pop_front();
    display(lis);
    cout << endl;

    lis.remove(5);
    display(lis);
    cout << endl;

    lis.sort();
    display(lis);
    cout << endl;

    lis.merge(lis1);
    display(lis);
    cout << endl;

    lis.reverse();
    display(lis);
    cout << endl;

    return 0;
}