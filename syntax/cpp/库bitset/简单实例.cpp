#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>

using namespace std;

int main()
{
    bitset<8> bst;
    cout << bst << endl;
    bst.set(1, 1);
    cout << bst << endl;
    return 0;
}