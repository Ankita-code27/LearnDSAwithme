#include <bits/stdc++.h>

using namespace std;

void solve(stack < int > & s, int x) {
  //base case
  if (s.empty()) {
    s.push(x);
    return;
  }
  int num = s.top();
  s.pop();
  //recursive call
  solve(s, x);
  s.push(num);
}
stack < int > pushAtBottom(stack < int > & myStack, int x)
{
  solve(myStack, x);
  return myStack;
}

int main() {
  stack < int > stk;
  stk.push(7);
  stk.push(8);
  stk.push(9);
  stk.push(10);
  pushAtBottom(stk, 6);

  while (!stk.empty()) {
    cout << stk.top() << " ";
    stk.pop();
  }

  return 0;

}