#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    float percentage;

    Student(){
    }
    Student(string n,int r){
        n= name;
        r=roll;
    }
    Student(string n,int r,float p){//CONSTRUCTOR - class and constructor have same name
        name=n;
        roll=r;
        percentage=p;
    }
};
int main(){
   Student s("Raghav",76,92.8);//correct mapping
    Student s("raghav",76);
    cout<<s.name;

   /* Student s;
    s.name="Raghav";
    s.roll=76;
    s.percentage=98.8;
    */

    //Student s={"Raghav",92.6};//assume 92.6 as roll
   // s.roll=76;
    //cout<<s.name;
    //cout<<s.roll;
   /* s.name="Raghav";
    s.roll=76;
    s.percentage=92.6;//(.)dot operator
raj";
    student y;
    y.name="Ni
    y.roll=54;
    y.percentage=99.8;

    student z=s;//deep copying(copying s to z)without affecting attributes of s;
    z.name="Harsh";
    cout<<s.name;*/
    return 0;
}