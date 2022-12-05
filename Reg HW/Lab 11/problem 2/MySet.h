#pragma once

class MySet{
private:
    unsigned int range, size;
    bool* set;
public:
    MySet(unsigned);
    MySet(const MySet &);
    ~MySet();
    void insertElement(int k);
    void deleteElement(int k);
    void printSet();
    bool isEqualTo(const MySet &);
};