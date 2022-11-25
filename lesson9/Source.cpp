#include <iostream>
using namespace std;

template <typename T>

class Stack {
private:
	T* stackPtr;
	T top;
	int size;
public:
	Stack(int = 10);
	bool push(const T value);
	bool pop();
	void printStack();
};

template <typename T>

Stack<T>::Stack(int Size) {
	size = Size > 0 ? Size : 10;
	stackPtr = new T[size];
	top = -1;
}

template<typename T>
bool Stack<T>::push(const T value) {
	if (top == size - 1)
		return false;
	top++;
	stackPtr[top] = value;

	return true;
}

template<typename T>
bool Stack<T>::pop() {
	if (top == -1)
		return false;
	stackPtr[top] = 0;
	top--;

	return true;
}

template<typename T>
void Stack<T>::printStack() {
	for (int k = size - 1; k >= 0; k--)
		cout << "[" << stackPtr[k] << "]" << endl;
}

int main() {
	Stack <int> myStack(5);
	cout << "Pushing numbers into the stack:" << endl;
	for (int i = 0; i < 5; i++)
	{
		int j;
		cin >> j;
		myStack.push(j);
	}

	myStack.printStack();
	myStack.pop();
	myStack.push(10);
	myStack.printStack();

	return 0;
}