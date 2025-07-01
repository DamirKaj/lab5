#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите строку: ";
    getline(cin, s);

    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        st.push(s[i]);
    }

    string reversed;
    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    cout << "Перевёрнутая строка: " << reversed;
    return 0;
}


