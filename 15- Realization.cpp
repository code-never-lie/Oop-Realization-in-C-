Realization

 see Examples form Generalization Lec

- Parent(Abstract class) does not exist
- Parent(Abstract class) represents only a concept
- Child (concreate derived class) implements the   concept of its parent


example 
             vehicle(start(), run(),stop())

 
 car(start(), run(),stop())   Truck(start(), run(),stop())

- Car implements the concept of vehicle
- Car realizes vehicle
- Vehicle realizes in the form of car and truck
- Pysically there is no vehicle
- Car should implemet all public methods(interfaces) in vehicle

class Vehicle {
public :
 virtual void start()=0;
 virtual void run()=0;
 virtual void stop()=0;
};
class Car:public Vehicle{
public :
 void start(){cout<<" Car Pertol Engine Start\n"; }
 void run() {cout<<" Car runs\n"; }
 void stop(){cout<<" Car stop with ABS Breaks\n"; }

};
class Truck:public Vehicle{
public :
 void start(){cout<<" Truck Diesal Engine Start\n"; }
 void run() {cout<<" TRuck  move\n"; }
 void stop(){cout<<"TRuck stop with Air presher Breaks\n"; }

};
void main () {
//Vehicle ob;//error
//Vehicle *p;  //Ok
Car c;
c.start();c.run();c.stop();
Truck t;
t.start();t.run();t.stop();
}
..........................................................

Mutileval Realization

e.g            Car
    Sedan           Hatchback
Honda   Suzuki     Suzuki   Toyota
civic    Liana      Alto      vitz
 see UML Diagram on board

public :
virtual void engine()=0;
virtual void tyre()=0;
};

class Sedan:public Car{
public :
virtual void luggageCase()=0;
};
class Honda:public Sedan{
public:
virtual void enironmenal()=0;
};
class Civic:public Honda{
public:
 void engine(){cout<<" Car Pertol Engine Start\n"; }
 void tyre(){cout<<" Car Tyres\n";}
 void luggageCase(){cout<<" Car LuggageCase\n";}
 void enironmenal(){cout<<" neat and clean Air\n";}
 void digitalMeter() { cout<<" DigitalPower\n";   }
  // we can implement extra features
};
void main () {

Civic c;
c.engine();c.tyre();c.luggageCase();c.enironmenal();

}
..........................................................
Use of Realization in Industry

1- Enforcement of standards

2- Polymorphism

3- Write Generic Code

..........................................................

1- Enforcement of standards
  - in order to enforce standards on programming teams

e.g Suppose we have three teams A B And C.
  Team A    Mail Project
  Team B    Routing Protocols
  Team C    Web Application

class   RFC {
public:
  virtual void RFC1()=0;
  virtual void RFC2()=0;

};
class GNU {
public:
  virtual void GNU1()=0;
  virtual void GNU2()=0;
};
................................

Team A   Mail Project 
class SMTP:public RFC, public GNU{

void sendMail()  {}
// should implement all RFC and GNU methods

};


.....................................................






















