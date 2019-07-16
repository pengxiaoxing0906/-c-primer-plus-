//travel.cpp --using structures with functions, 把结构作为函数参数传递的例子  按值传递 功能：几时几分相加并转换分钟给小时
#include <iostream>
struct travel_time
        {
    int hours;
    int mins;
};
const int Mins_per_hr=60;
travel_time sum(travel_time t1,travel_time t2);
void show_time(travel_time t);


int main() {
    using namespace std;
    travel_time day1={5,45};
    travel_time day2={3,20};

    travel_time trip=sum(day1,day2); //返回travel_time类型的结构trip,包含hours mins
    cout<<"Two-day total: ";
    show_time(trip);

    travel_time day3={4,32};
    show_time(sum(trip,day3));

    return 0;
}
travel_time sum(travel_time t1,travel_time t2)
{
    travel_time total;
    total.mins=(t1.mins+t2.mins)%Mins_per_hr;
    total.hours=t1.hours+t2.hours+(t1.mins+t2.mins)/Mins_per_hr;
    return total;
}
void show_time(travel_time t)
{
    using namespace std;
    cout<<t.hours<<" hours, "<<t.mins<<" minutes\n";
}