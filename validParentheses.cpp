#include <string>
#include <iostream>
#include <stack>

bool isValid(std::string s)
{
	std::stack<char> myStack;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			myStack.push(s[i]);
		if (myStack.empty())
			return (false);
		if (s[i] == ')' && myStack.top() != '(')
			return (false);
		if (s[i] == '}' && myStack.top() != '{')
			return (false);
		if (s[i] == ']' && myStack.top() != '[')
			return (false);
		myStack.pop();
	}
	return (true);
}