Exercise-1

#include <iostream>
using namespace std;

//add class definitions below this line
class PracticeClass {
public:
  string name;
};

  
//add class definitions above this line

int main() {
  
  PracticeClass obj;
  obj.name = "Class Object";
  cout << obj.name;
  
  return 0;
  
}

===================

Exercise-2

class Cat {
  public:
    string breed;
    string color;
    string name;
  
  Cat() {
    breed = "American Shorthair";
    color = "black";
    name = "Kiwi";
  }
};


=========================

Exercise-3

#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line
class Superhero {
public:
  string name;
  string identity;
  vector<string> powers;
  
  Superhero(string n, string i, vector<string> p) {
    name = n;
    identity = i;
    powers = p;
  }
};

  
//add class definitions above this line

int main() {

  Superhero iron_man("Iron Man", "Tony Stark", {"armored suit", "laser beams", "flight"});
  cout << iron_man.name << endl;
  cout << iron_man.identity << endl;
  for (auto a : iron_man.powers) {
    cout << a << endl;
  }

  return 0;
  
}====================

Exercise-4

#include <iostream>
using namespace std;

//add class definitions below this line

class Observation {
public:
  string date;
  int temperature;
  double elevation;
  int penguins;
  double precipitation;
  
  Observation(string d, int temp, double elev, int peng) {
    date = d;
    temperature = temp;
    elevation = elev;
    penguins = peng;
    precipitation = 0;
  }
};

  
//add class definitions above this line

int main() {

  Observation o("October 26, 2019", -47, 329.4, 3);
  cout << "Today is " << o.date << "." << endl;
  cout << "Temperature: " << o.temperature << endl;
  cout << "Elevation: " << o.elevation << endl;
  cout << o.penguins << " penguins observed with " << o.precipitation << " precipitation." << endl;
  
  return 0;
  
}
==========================

Exercise-5

#include <iostream>
#include <vector>
using namespace std;
    
class BigCat {
  public:
    string species;
    string common_name;
    vector<string> habitat;
    string genus = "panthera";
  
  BigCat(string sp, string cn, vector<string> h) {
    species = sp;
    common_name = cn;
    habitat = h;
  }
};

int main() {
  
  //add code below this line

  BigCat snow_leopard("uncia", "snow leopard", {"Himalaya mountains", "Siberian mountains"});



  //add code above this line
  
  cout << "A " << snow_leopard.common_name; 
  cout << " is part of the " << snow_leopard.species << " species." << endl;
  cout << "Their genus class is " << snow_leopard.genus << "." << endl;
  cout << "Some of their habitats include: ";
  for (auto a : snow_leopard.habitat) {
    cout << a << ", ";
  }
  cout << "etc." << endl;
  
  return 0;
  
}
