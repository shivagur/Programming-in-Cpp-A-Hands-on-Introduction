Exercise-1

#include <iostream>
using namespace std;

class CelestialBody {
private:
  double earth_diameter = 12756.3;

public:
  CelestialBody(string n, double diam, double dist, int m) {
    name = n;
    diameter = diam;
    distance = dist;
    moons = m;
  }
  
  string name;
  double diameter;
  double distance;
  int moons;

  double ComparedToEarth() {
    double relative_size = diameter / earth_diameter;
    return relative_size;
  }
};

int main() {
  
  CelestialBody planet("Jupiter", 142984, 778360000, 79);
  
  cout << planet.ComparedToEarth() << endl;

  return 0;
  
}

=======================


Exercise-2


#include <iostream>
using namespace std;

//add class definitions below this line

class CelestialBody {
  public:
    CelestialBody(string n, double diam, double dist, int m) {
      name = n;
      diameter = diam;
      distance = dist;
      moons = m;
    }
    string CloserToSun(CelestialBody cb) {
      if (distance < cb.distance) {
        return name;
      }
      else {
        return cb.name;
      }
    }
    
  private:
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below
  
  CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
  CelestialBody venus("Venus", 12103.6, 108160000, 0);
  cout << mercury.CloserToSun(venus) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}


=================

Exercise-5

#include <iostream>
using namespace std;

//add class definitions below this line

class Subway {
  public:
    Subway() {
      passengers = 0;
      total_fares = 0;
    }
    int GetPassengers() {
      return passengers;
    }
    void Board(int p) {
      if (p >= 0) {
        passengers += p;
        CalculateFares(p);
      }
    }
    void Disembark(int p) {
      if (p >= 0) {
        if (passengers - p < 0) {
          passengers = 0;
        }
        else {
          passengers -= p;
        }
      }
    }
    double GetFares() {
      return total_fares;
    }
    
  private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;

    void CalculateFares(int p) { //private helper class function
      total_fares += p * fare;
    }
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}


===========================

Exercise-4

#include <iostream>
using namespace std;

//add class definitions below this line

class MarbleBag {
  public:
    MarbleBag(int r, int b, int y) {
      red = r;
      blue = b;
      yellow = y;
    }
    int AddRed(int amount) {
      return red += amount;
    }
    int AddBlue(int amount) {
      return blue += amount;
    }
    int AddYellow(int amount) {
      return yellow += amount;
    }
    int RedTotal() {
      return red;
    }
    int BlueTotal() {
      return blue;
    }
    int YellowTotal() {
      return yellow;
    }
    int BagTotal() {
      return red + blue + yellow;
    }

  private:
    int red;
    int blue;
    int yellow;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line
  
  MarbleBag bag(12, 8, 19);
  bag.AddRed(4);
  bag.AddBlue(12);
  bag.AddYellow(-1);
  bag.AddBlue(-3);
  cout << "There are " << bag.RedTotal() << " red marbles." << endl;
  cout << "There are " << bag.BlueTotal() << " blue marbles." << endl;
  cout << "There are " << bag.YellowTotal() << " yellow marbles." << endl;
  cout << "There are " << bag.BagTotal() << " total marbles." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}

=========================

Exercise-3

#include <iostream>
using namespace std;

//add class definitions below this line

class Mass {
  public:
    Mass(double mg, double g, double kg) {
      milligrams = mg;
      grams = g;
      kilograms = kg;
    }
    double TotalWeight() {
      return ((milligrams / 1000) + grams + (kilograms * 1000));
    }
    string CompareWeight(Mass m) {
      double mass1 = TotalWeight();
      double mass2 = m.TotalWeight();
      if (mass1 > mass2) {
        return "The first object is heavier.";
      }
      else if (mass2 > mass1) {
        return "The second object is heavier.";
      }
      else {
        return "The two objects weigh the same.";
      }
    }
  
  private:
    double milligrams;
    double grams;
    double kilograms;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below

  Mass m1(800, 17, 3);
  Mass m2(730, 38, 2);
  cout << m1.TotalWeight() << endl;
  cout << m2.TotalWeight() << endl;
  cout << m1.CompareWeight(m2) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}




