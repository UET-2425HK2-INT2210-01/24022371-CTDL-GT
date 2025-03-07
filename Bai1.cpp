#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    int dem = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i])
            dem++;
        }
    }
    cout << dem;
    return 0;
}