#include <iostream>
#include "test.h"
using namespace std;

        template <class T>
        bool arrayListType<T>::isEmpty()const
        {
            return(length ==0);
        }

        template <class T>
        bool arrayListType<T>::isFull() const
        {
            return(length==maxSize);
        }

        template <class T>
        int arrayListType<T>::listSize() const
        {
            return length;
        }

        template <class T>
        int arrayListType<T>::maxListSize() const
        {
            return maxSize;
        }

        template <class T>
        void arrayListType<T>::print() const
        {
            for (int i = 0; i < length; ++i)
            {
                cout << list[i] << " ";
            }

            cout << endl;
        }

        template <class T>
        bool arrayListType<T>::isItemAtEqual(int location, const T &item) const
        {
            return (list[location] == item);
        }

        template <class T>
        void arrayListType<T>::insertAt(int location, const T &item)
        {
            if(location < 0 || location >=maxSize)
                cerr << "The position fo the item to be iserted" << "is out of range" << endl;
            else
                if(length>= maxSize)
                    cerr << "Cannot insert in a full list." << endl;
                else
                {
                    for(int i = length; i > location; i--)
                        list[i] = list[i-1];

                    list[location] = item;

                    length++;
                }
        }

        template <class T>
        void arrayListType<T>::insertEnd(const T &item)
        {
            if(length>= maxSize)
                cerr << "Cannot insert in a full list" << endl;
            else
            {
                list[length++] = item;
            }
        }

        template <class T>
        void arrayListType<T>::removeAt(int location)
        {
            for (int i = location; i <length-1; --i)
            {
                list[i] = list[i+1];
            }
            length--;
        }

        template <class T>
        void arrayListType<T>::retrieveAt(int location, T &item) const
        {
            if(location<0 || location >= length)
                cerr << "The location of the item to be retrieved is" << "out of range." << endl;
            else
                item = list[location];
        }

        template <class T>
        void arrayListType<T>::replaceAt(int location, const T &item)
        {
            if(location < 0 || location >= length)
                cerr << "Error" << endl;
            else
                list[location] = item;
        }

        template <class T>
        void arrayListType<T>::clearList()
        {
            length=0;
        }

        template <class T>
        int arrayListType<T>::seqSearch(const T item) const
        {
            int loc;
            bool found = false;

            for(loc=0;loc<length;loc++)
            {
                if(list[loc]==item)
                {
                    found = true;
                    break;
                }
                if(found)
                    return loc;
                else
                    return -1;
            }
        }


        template <class T>
        void arrayListType<T>::insert(const T& item)
        {
            int loc;

            if(length == 0)
                list[length++] = item;
            else  if(length==maxSize)
                cerr << "Cannot insert in a full list." << endl;
            else
            {
                loc = seqSearch(item);
                if(loc == -1)
                    list[length++] = item;
                else
                    cerr << "the item to be inserted is already in" << endl;
            }
        }

        template<class T>
        arrayListType<T>& arrayListType<T>::operator=(const arrayListType<T>& otherList)
        {
            if(this != &otherList)
            {
                delete [] list;
                maxSize = otherList.maxSize;
                length = otherList;

                list = new T[maxSize];
                for(int i = 0;i<length; i++)
                    list[i] = otherList.list[i];
            }
            return *this;
        }




int main() {
}