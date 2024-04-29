#include <iostream>
using namespace std;

int main()
{
  int i = 1;
  while (i < INT8_MAX)
  {
    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;

    cout << "entyer the value of b " << endl;
    cin >> b;

    char op;
    cout << "Enter the operation you want to perform :" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
      cout << (a + b) << endl;
      break;

    case '-':
      cout << (a - b) << endl;
      break;

    case '*':
      cout << (a * b) << endl;
      break;

    case '/':
      cout << (a / b) << endl;
      break;

    case '%':
      cout << (a % b) << endl;
      break;

    default:
      cout << "Please enter a vlid operation:";

      break;
    }
    i = i + 1;
  }

  return 0;
}