#ifndef NBAOBSERVER_H_INCLUDED
#define NBAOBSERVER_H_INCLUDED
#include "Observer.h"
#include "Subject.h"
#include <string>

using namespace std;

//具体的观察者，看NBA的
class NBAObserver :public Observer
{
public:
    NBAObserver(string name, Subject *sub) :Observer(name, sub)
    {
    }
    void update();
};


#endif // NBAOBSERVER_H_INCLUDED
