#include<iostream>
#include "box.h"



Box::Box()
{
   my_length=1;
   my_breadth=1;
   my_height=1;
}

Box::Box(int a,int b,int c)
{
  my_length=a;
  my_breadth=b;
  my_height=c;
}

Box::Box(int s)
{
  my_length=s;
  my_breadth=s;
  my_height=s;
}
Box::Box(const Box& ref)
{
   my_length=ref.my_length;
   my_breadth=ref.my_breadth;
   my_height=ref.my_height;

}

 int Box:: length()const{return my_length;}
 int Box:: breadth()const {return my_breadth;}
 int Box:: height()const{return my_height;}
 int Box:: volume()const{return(my_length*my_breadth*my_height);}
 void Box:: display()const{std::cout<<my_length<<" "<<my_breadth<<" "<<my_height<<std::endl;} 
