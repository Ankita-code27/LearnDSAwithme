#include <bits/stdc++.h>

using namespace std;

bool isValidParenthesis(string expres) {
  stack < char > s;
  for (int i = 0; i < expres.length(); i++) {
    char ch = expres[i];

    //opening then push
    //if closing then stacktop check and then pop

    if (ch == '[' || ch == '{' || ch == '(') {
      s.push(ch);
    }
    else {
      if (!s.empty()) {

        char top = s.top();

        if ((ch == ']' && top == '[') ||
          (ch == '}' && top == '{') ||
          (ch == ')' && top == '(')) {

          s.pop();

        }
        else {
          return false;
        }
      }
      else {
        return false;
      }
    }
  }
  return s.empty();
}

int main() {
  string test = "{()}";

  if (isValidParenthesis(test)) {
    cout << "The string is valid!" << endl;
  } else {
    cout << "The string is invalid!" << endl;
  }

  return 0;
}