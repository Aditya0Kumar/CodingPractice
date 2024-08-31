#include<iostream>
using namespace std;

class Student{// This is Class..
    public:
    string name;
    int age;
    int roll;
};

void MainStudent(){//This is Function
    Student A;
    Student B;
    Student C;

    A.name="Aditya";
    A.age=18;
    A.roll=03;

    B.name="Nitin";
    B.age=21;
    B.roll=56;

    C.name="Prabhu";
    C.age=20;
    C.roll=9;

    cout<<"Name: "<<A.name<<" Age: "<<A.age<<" Roll No.: "<<A.roll<<endl;
    cout<<"Name: "<<B.name<<" Age: "<<B.age<<" Roll No.: "<<B.roll<<endl;
    cout<<"Name: "<<C.name<<" Age: "<<C.age<<" Roll No.: "<<C.roll<<endl;
}

class room{//This is class
    public:

    int l,b,h;

    int area(){//This in method
        return (l*b);
    }

    int vol(){//This is Method
        return (l*b*h);
    }

    room(){//This is Constructor
        cout<<"This is a constructor..."<<endl;
    }

};

void RoomMain(){//This in Function
    room r1;
    cout<<"Enter l b h: "<<endl;
    cin>>r1.l;
    cin>>r1.b;
    cin>>r1.h;
    cout<<"Area: "<<r1.area()<<endl;
    cout<<"Vol: "<<r1.vol()<<endl;
}




int main(){

    RoomMain();
}