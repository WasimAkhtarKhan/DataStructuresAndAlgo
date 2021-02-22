//https://www.hackerrank.com/challenges/qheap1/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int q, x, y;
    cin >> q;
    multiset<int> pq;
    while (q-- > 0) {
        cin >> x;
        if (x == 1)
            cin >> y, pq.insert(y);
        else if (x == 2)
            cin >> y, pq.erase(y);
        else
            cout << *pq.begin() << endl;
    }
    return 0;
}
