#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printVec(const vector<int> &v) {
    for(int i = 0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}

int main() {
    vector<int> v; // v is a dynamic array
    while(1) {
        cout << "\n\n";
        int t;
        cin >> t;
        v.push_back(t);
        printVec(v);

        int p = 0;
        cout << "Press 1 if you want to exit and any other key if you want to continue\n";
        cin >> p;
        if(p == 1) break;
    }
    return 0;
}