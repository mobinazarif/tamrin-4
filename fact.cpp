#include <iostream>
using namespace std;
int main() {
    int num, sum = 1;
    cout << "enter the number: "<<"\n";
    cin >> num;
    for (int i = 1; sum < num ; ++i)
        sum += sum * i;
    if (sum == num)
        cout << "YES!"<<"\n";
    else
        cout << "NO!"<<"\n";
    return 0;
}
