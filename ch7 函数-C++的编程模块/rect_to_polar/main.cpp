//功能：用结构体的方式表示直角坐标和极坐标，并实现直角坐标到极坐标的转换
#include <iostream>
#include <cmath>

//结构体申明
struct  polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};

//函数申明
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {
   using namespace std;
   rect rplace;
   polar pplace;

   cout<<"Enter the x and y values: ";
   while(cin>>rplace.x>>rplace.y)
   {
       pplace=rect_to_polar(rplace);
       show_polar(pplace);
       cout<<"Next two numbers(q to quit): ";
   }
    return 0;
}
polar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;
    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);
    return  answer;
}

void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg=57.29577951;
    cout<<"distance = "<<dapos.distance;
    cout<<" , angel= "<<dapos.angle*Rad_to_deg;
    cout<<" degrees\n";
}