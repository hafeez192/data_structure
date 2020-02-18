#ifndef LINKEDLISTTYPE_H
#define LINKEDLISTTYPE_H
#include "linkedListIterator.h"
#include "Node.h"
#include <iostream>
using namespace std;
class linkedListType
{
public:

	//struct  Node;
	linkedListType();
	//linkedListType(const linkedListType &otherList);
	virtual ~linkedListType();
	linkedListType& operator=(linkedListType&);
	void initializeList();
	bool isEmpty() const;
	void print() const;
	int length() const;
	void destroyList();
	int front() const;
	int back() const;
	virtual bool search(const int &searchItem) const=0;
	virtual void insertFirst(const int &newItem) =0;
	virtual void insertLast(const int &newItem) =0;
	virtual void deleteNode(const int &deleteItem)=0 ;
	void copyList(linkedListType &otherList);
	//linkedListIterator begin() const;
	//linkedListIterator end();

	

protected:
	int count;
	Node *first;
	Node *last;

private:
	//void copyList(const linkedListType &otherList);
};

#endif // !LINKEDLISTTYPE_H

