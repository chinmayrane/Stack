#ifndef Stack_H
#define Stack_H

#include <array>
#include <iostream>
using namespace std;

#define MAX_SIZE 15

template<typename T> 
class Stack{
	public:
		typedef typename array<T, MAX_SIZE>::size_type size_type;
		
		Stack(); // Default Constuctor
		Stack(const Stack&) = default; // Copy Constructor
		~Stack() = default; // Descructor

		Stack& operator =(const Stack &) = default; // Assignment Operator

		void push(T x);
		T pop();
		bool isEmpty();
		T peek();
		void print();

	private:
		array<T, MAX_SIZE> a;
		size_type top;
};

#endif
