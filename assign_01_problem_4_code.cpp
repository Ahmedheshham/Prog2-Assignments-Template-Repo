//Ahmed Hesham
//202106242


#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
 
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
 
    int mid = a + b + c - min - max;
 
    cout << min <<endl;
    cout << mid <<endl;
    cout << max << endl;
    cout<<endl; 
    cout << a <<endl; 
    cout<< b <<endl; 
    cout<< c << endl;
 
    return 0;
}
