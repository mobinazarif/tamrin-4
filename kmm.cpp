#include <iostream>
using namespace std;
int main() {
    int x, a, b, kmm, t1, t2;
    cout << "enter two numbers: "<<"\n";
    cin >> a >> b;
    t1=a;
    t2=b;
    x= a % b;
    while (x!=0)
    {
        a=b;
        b=x;
        x=a%b;
    }
    kmm = (t1*t2)/b;
    cout << "KMM equal: " << kmm<<"\n";
    return 0;
}
