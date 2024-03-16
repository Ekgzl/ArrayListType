//
// Created by enes4 on 3/15/2024.
//

#ifndef ULINKEDLISTS_TEST_H
#define ULINKEDLISTS_TEST_H

template<class T>
class arrayListType {
private:
    T* list;
    int length;
    int maxSize;

public:
    arrayListType(int size = 100);
    arrayListType(const arrayListType<T>& otherList);
    ~arrayListType();

    bool isEmpty() const;
    bool isFull() const;
    int listSize() const;
    int maxListSize() const;
    void print() const;
    bool isItemAtEqual(int location, const T& item) const;
    void insertAt(int location, const T& item);
    void insertEnd(const T& item);
    void removeAt(int location);
    void retrieveAt(int location, T& item) const;
    void replaceAt(int location, const T& item);
    void clearList();
    void insert(const T& item);

    int seqSearch(const T item) const;

    arrayListType<T>& operator=(const arrayListType<T>& otherList);
};

#endif //ULINKEDLISTS_TEST_H
