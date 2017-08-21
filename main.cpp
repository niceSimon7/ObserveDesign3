#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "StockObserver.h"
#include "NBAObserver.h"
#include "Secretary.h"

using namespace std;

int main()
{
    Subject *dwq = new Secretary(); //创建观察者　　　
    //被观察的对象
    Observer *xs = new NBAObserver("xiaoshuai", dwq);
    Observer *zy = new NBAObserver("zouyue", dwq);
    Observer *lm = new StockObserver("limin", dwq);
    //加入观察队列
    dwq->attach(xs);
    dwq->attach(zy);
    dwq->attach(lm);
    //事件
    dwq->action = "去吃饭了!";
    //通知
    dwq->notify();
    cout << endl;
    dwq->action = "梁所长来了!";
    dwq->notify();
    return 0;
}
