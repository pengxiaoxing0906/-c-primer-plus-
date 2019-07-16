#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show( box & a);
void mul(box &a);

int main() {
    using namespace std;
    box box1={"hua chenyu",172.0,20.0,30.0};
    show(box1);
    mul(box1);
    return 0;
}
void show( box &a)
{
    using namespace std;
    cout<<"box1 name :"<<a.maker<<endl;
    cout<<"box1 height :"<<a.height<<endl;
    cout<<"box1 width :"<<a.width<<endl;
    cout<<"box1 length :"<<a.length<<endl;

}
void mul(box &a)
{
    a.volume=a.length*a.width*a.height;
    std::cout<<"box1 volume:"<<a.volume<<std::endl;
}