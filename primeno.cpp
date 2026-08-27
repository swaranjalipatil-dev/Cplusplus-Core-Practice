  #include <iostream>
using namespace std;
int main() {
    int n = 7;
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) break; 
    }   
    if  (i == n && n > 1) cout << ",Prime";
    else cout << "Not Prime ";
    return 0;
}
