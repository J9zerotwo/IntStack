#pragma once
template <class T>
class IntStack
{
private:
	int *stackArray;
	int stackSize;
	int top;

public:
	IntStack(int size);
	void push(T num);
	void pop(T &num);
	bool isFull();
	bool isEmpty();
};
