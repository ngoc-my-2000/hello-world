#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec { 2, 1, 4, 5 };
    for (const auto &v : vec) cout << v << " ";
    cout << endl;
    return 0;
}