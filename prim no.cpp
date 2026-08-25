  #include <iostream>
using namespace std;
int main() {
    int n, i = 2;
    cin >> n; 
    while(i < n && n % i != 0) i++;
    if (n > 1 && i == n) cout << "Prime";
    else cout << "Not  Prime";
    return 0;
}
