

#ifndef LINKEDLISTITERATOR_H

#define LINKEDLISTITERATOR_H
#include <iostream>
#include "linkedListType.h"
#include "linkedListIterator.h"
#include "Node.h"
using namespace std;


class linkedListIterator
{
public:
	linkedListIterator();
	linkedListIterator(Node *ptr);
	virtual ~linkedListIterator();

	int operator*();
	linkedListIterator operator++();
	bool operator==(const linkedListIterator &right) const;
	bool operator!=(const linkedListIterator &right) const;

protected:

private:
	Node *current;
};

#endif // !LINKEDLISTITERATOR_H


