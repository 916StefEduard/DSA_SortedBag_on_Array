#pragma once
#include "SortedBagIterator.h"
#include "BSTNode.h"

typedef int TComp;
typedef bool(*Relation)(TComp, TComp);

class SortedBagIterator;

class SortedBag {
    friend class SortedBagIterator;

private:
    BSTNode *tree;
    int root;
    int numberOfElements;
    int capacity;
    int firstFree;
    Relation r;

    void changeFirstFree();
    bool mustBeResized();
    void resize();
    TComp getMinimum(int startingRoot);
    TComp getMaximum(int startingRoot);
    int removeRecursively(int node, TComp e, bool &removed);

public:
    //constructor
    SortedBag(Relation r);
    void add(TComp e);
    bool remove(TComp e);
    bool search(TComp e) const;
    int nrOccurrences(TComp e) const;
    int size() const;

    //returns an iterator for this sorted bag
    //complexitate: Theta(1)
    SortedBagIterator iterator() const;

    //checks if the sorted bag is empty
    //Complexitate: Theta(1)
    bool isEmpty() const;

    //destructor
    ~SortedBag();
};
