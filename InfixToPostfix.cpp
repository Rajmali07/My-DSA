// #include <iostream>
// #include <string>
// using namespace std;

// class Node {
// public:
//     char data;
//     Node* next;
// };

// class Stack {
// private:
//     Node* top;
// public:
//     Stack() { top = nullptr; }

//     void push(char x) {
//         Node* t = new Node;
//         if (!t) {
//             cout << "Stack overflow\n";
//             return;
//         }
//         t->data = x;
//         t->next = top;
//         top = t;
//     }

//     char pop() {
//         if (!top) {
//             cout << "Stack underflow\n";
//             return -1;
//         }
//         Node* t = top;
//         char x = t->data;
//         top = top->next;
//         delete t;
//         return x;
//     }

//     bool isEmpty() {
//         return top == nullptr;
//     }

//     char stackTop() {
//         if (top) return top->data;
//         return -1;
//     }
// };

// int precedence(char x) {
//     if (x == '+' || x == '-') return 1;
//     else if (x == '*' || x == '/') return 2;
//     return 0;
// }

// bool isOperand(char x) {
//     return !(x == '+' || x == '-' || x == '*' || x == '/');
// }

// string InfixToPostfix(const string& infix) {
//     Stack st;
//     string postfix;

//     int i = 0;
//     while (i < infix.length()) {
//         if (isOperand(infix[i])) {
//             postfix += infix[i++];
//         } else {
//             while (!st.isEmpty() && precedence(infix[i]) <= precedence(st.stackTop())) {
//                 postfix += st.pop();
//             }
//             st.push(infix[i++]);
//         }
//     }
//     while (!st.isEmpty()) {
//         postfix += st.pop();
//     }
//     return postfix;
// }

// int main() {
//     string infix;
//     cout << "Enter an infix expression: ";
//     cin >> infix;

//     string postfix = InfixToPostfix(infix);
//     cout << "Postfix expression: " << postfix << endl;

//     return 0;
// }


// This for handling parenthesis 
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    char data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() { top = nullptr; }

    void push(char x) {
        Node* t = new Node;
        if (!t) {
            cout << "Stack overflow\n";
            return;
        }
        t->data = x;
        t->next = top;
        top = t;
    }

    char pop() {
        if (!top) {
            cout << "Stack underflow\n";
            return -1;
        }
        Node* t = top;
        char x = t->data;
        top = top->next;
        delete t;
        return x;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    char stackTop() {
        if (top) return top->data;
        return -1;
    }
};

int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;
    return 0;
}

bool isOperand(char x) {
    return !(x == '+' || x == '-' || x == '*' || x == '/' || x == '(' || x == ')');
}

string InfixToPostfix(const string& infix) {
    Stack st;
    string postfix;

    int i = 0;
    while (i < infix.length()) {
        if (isOperand(infix[i])) {
            postfix += infix[i++];
        } else if (infix[i] == '(') {
            st.push(infix[i++]);
        } else if (infix[i] == ')') {
            while (!st.isEmpty() && st.stackTop() != '(') {
                postfix += st.pop();
            }
            st.pop(); // discard '('
            i++;
        } else {
            while (!st.isEmpty() && precedence(infix[i]) <= precedence(st.stackTop())) {
                postfix += st.pop();
            }
            st.push(infix[i++]);
        }
    }
    while (!st.isEmpty()) {
        postfix += st.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = InfixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}