#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 0;
    int num[80] = {};
    cin >> n;
    while(n) {
        num[i] = n % 10;
        n /= 10;
        i++;
    }

    for(int j = i; j > 0; j--) {
        int max = -1; 
        int k = -1; 
        for(int l = 0; l < i; l++) {
            if(num[l] > max) {
                max = num[l];
                k = l;
            }
        }
        cout << max;
        num[k] = -1; 
    }
    return 0;
}
