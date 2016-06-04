#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

int main()
{
	Stack<int> s;
	s.push(8);
	s.print();

	s.push(19);
	s.print();

	s.push(27);
	s.print();

	s.push(35);
	s.print();

	s.push(49);
	s.print();

	s.push(22);
	s.print();

	s.push(2);
	s.print();

	s.push(43);
	s.print();

	s.push(17);
	s.print();

	s.push(21);
	s.print();

	s.push(7);
	s.print();

	s.push(14);
	s.print();

	s.push(26);
	s.print();

	s.peek();

	s.pop();
	s.print();

	s.pop();
	s.print();

	s.pop();
	s.print();

	s.pop();
	s.print();

	s.pop();
	s.print();

	s.pop();
	s.print();

	s.pop();
	s.print();

	return 0;
}