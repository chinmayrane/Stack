#include <iostream>
#include <stdio.h>
#include "Stack.h"

using namespace std;

template<typename T>
Stack<T>::Stack(){
	top = -1;
}

template<typename T>
bool Stack<T>::isEmpty(){
	if(top == -1){
		return true;
	}else{
		return false;
	}
}

template<typename T>
void Stack<T>::push(T x){
	if(top == MAX_SIZE-1){
		cout<<"Stack Overflow\n";
	}else{
		a[++top] = x;
	}
}

template<typename T>
T Stack<T>::pop(){
	if(isEmpty()){
		cout<<"Stack Empty\n";
	}else{
		return a[(top--)];
	}
}

template<typename T>
T Stack<T>::peek(){
	if(isEmpty()){
		cout<<"Stack Empty\n";
	}else{
		return a[top];
	}
}

template<typename T>
void Stack<T>::print(){
	cout<<"Stack : ";
	for (size_type i = 0; i <= top; ++i){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


