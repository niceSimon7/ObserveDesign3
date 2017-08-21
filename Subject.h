#ifndef SUBJECT_H_INCLUDED
#define SUBJECT_H_INCLUDED
#include "Observer.h"
#include <list>
#include <string>

using namespace std;
class Observer;

//抽象通知者
class Subject
{
protected:
    list<Observer*> observers;
public:
    string action;
    virtual void attach(Observer*) = 0;
    virtual void detach(Observer*) = 0;
    virtual void notify() = 0;
};

#endif // SUBJECT_H_INCLUDED
