#ifndef STOCKOBSERVER_H_INCLUDED
#define STOCKOBSERVER_H_INCLUDED
#include "Observer.h"
#include <string>

using namespace std;

//具体的观察者，看股票的
class StockObserver :public Observer
{
public:
    StockObserver(string name, Subject *sub) :Observer(name, sub)
    {
    }
    void update();
};

#endif // STOCKOBSERVER_H_INCLUDED
