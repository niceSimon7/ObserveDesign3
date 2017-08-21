#ifndef OBSERVER_H_INCLUDED
#define OBSERVER_H_INCLUDED
#include "Subject.h"
#include <string>

using namespace std;

//抽象观察者
class Observer
{
protected:
    string name;
    Subject *sub;
public:
    Observer(string name, Subject *sub)
    {
        this->name = name;
        this->sub = sub;
    }
    virtual void update() = 0;
};

#endif // OBSERVER_H_INCLUDED
