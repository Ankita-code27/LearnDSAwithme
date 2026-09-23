#include <bits/stdc++.h>

using namespace std;
class Node
{
  public: int data;
  Node * next;
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
  }
};
class Stack
{
  public: Node * top;
  Stack() {
    top = NULL;
  }
  void push(int value) {
    Node * temp = new Node(value);
    temp -> next = top;
    top = temp;
  }
  void pop() {
    if (top == NULL) {
      cout << "Stack is Underflow" << endl;
      return;
    }
    Node * temp = top;
    top = top -> next;
    delete temp;
  }
  int peek() {
    if (top == NULL) {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    return top -> data;
  }
  bool isEmpty() {
    return top == NULL;
  }
};

int main() {
  Stack st;
  st.push(22);
  st.push(44);
  st.push(55);
  cout << st.peek() << endl;
  st.pop();
  cout << st.peek() << endl;
  st.pop();
  if (st.isEmpty())
    cout << "Stack is Empty." << endl;
  else
    cout << "Stack is not Empty" << endl;
  return 0;
}