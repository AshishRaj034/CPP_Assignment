#include<iostream>
class Box
{

    int my_length;
    int my_height;
    int my_breadth;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    int getbreadth();
    int getheight ();
    int getlength();
    int volume();
    void display();
};
