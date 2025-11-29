#include <iostream>

using std::string;
using std::cout;

class Car{

private:
  string make;
  string model;
  int year;
  string color;
  Car(const string & make,const string & model, int year, string color) : make(make), model(model), year(year), color(color) {}
public:
  class Builder{
  private:
    string make;
    string model;
    int year;
    string color;
  public:
    Builder& setMake(const string & make){
      this->make = make;
      return *this;
    }
    
    Builder& setModel(const string & model){
      this->model = model;
      return *this;   
    }

    Builder& setYear(const int & year){
      this->year = year;
      return *this;    
    }
    
    Builder& setColor(const string & color){
      this->color = color;
      return *this;
    }
    Car build(){
      return Car(make, model, year,color);
    }
    
  };
  void display(){
    cout<<"Car make:"<< make << " Car Model:" <<model << " Car year:" <<year<< " Car color:"<<color<<std::endl;

  }
};
