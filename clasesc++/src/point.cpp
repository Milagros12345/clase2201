#include "point.h"
#include <iostream>
using namespace std;
//point::point()
//{
//    x=0;
//    y=0;
//}
point::point(double nx,double ny){
    x=nx;
    y=ny;
}
void point::print(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}
point::~point()
{
    //dtor
}
