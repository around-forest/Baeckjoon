#include <iostream>
using namespace std;

int main() {
    long long int a, b;
    
    cin >> a >> b;
        
    if(a > b) {
        for(int j = 1; j <= b; j++) {
            if((a*j)%b == 0) {
                cout << a*j << '\n';
                break;
            }
        }
    } else if(a < b) {
        for(int j = 1; j <= a; j++) {
            if((b*j)%a == 0) {
                cout << b*j << '\n';
                break;
            }
        }
    } else {
        cout << a << '\n';
    }
    
}