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

class StudentWithConstructor{
    public:
    string name;
    int age;
    int roll;

    StudentWithConstructor(string name,int age, int roll){//This is Constructor
        this->name;
        this->age;
        this->roll;
        cout<<"Name: "<<name<<" Age: "<<age<<" Roll No.: "<<roll<<endl;
    }
};

void MainStudentWithConstructor(){
    StudentWithConstructor A("Aditya",18,3);
    StudentWithConstructor B("Nitin",212,56);
    StudentWithConstructor C("Prabhu",20,9);

}


class room{
    public:
    int l,b,h;

    room(){//This is Constructor
        cout<<"This is a constructor..."<<endl;
    }

    room(int l,int b,int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }

    // room(room &r1){
    //     l=r1.l;
    //     b=r1.b;
    //     h=r1.h;
    // }

    int area(){//This is a method
        return (l*b);
    }

    int vol(){
        return (l*b*h);
    }



    ~room(){
        cout<<"This is Deconstructor..."<<endl;
    }

};

void MainRoom(){//This in Function
    room room1(10,12,6);
    /*
    cout<<"Enter l b h: "<<endl;
    cin>>r.l;
    cin>>r.b;
    cin>>r.h;
    */
    room room2(23,34,2);
    room room3(room1);
    cout<<"Area: "<<room2.area()<<endl;
    cout<<"Vol: "<<room3.vol()<<endl;
}




int main(){
    //MainStudent();
    //MainStudentWithConstructor();
    MainRoom();
}


/*
Notes:
Constructor wors on its own hence there is no need for initisalising
~XYZ ==> This is Deconstructor,i.e, called in last after conasructor and all methods.


*/