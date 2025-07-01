#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int num;

    cout << "enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        q.push(num); 
    }

    cout << "deleted  : ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop(); 
    }

    return 0;
}

