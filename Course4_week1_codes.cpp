Exercise-1

#include <iostream>
using namespace std;

//add class definitions below this line
class Fruit {
public:
    Fruit(string n, string c) {
        name = n;
        color = c;
    }

    string GetName() {
        return name;
    }

    string GetColor() {
        return color;
    }

    void SetName(string n) {
        name = n;
    }

    void SetColor(string c) {
        color = c;
    }

private:
    string name;
    string color;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Fruit fruit("apple", "red");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  fruit.SetName("orange");
  fruit.SetColor("orange");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}

==========================

Exercise-2

class Watch {
  public:
    Watch(string mf, string mo, int d, int w, string mt) {
      manufacturer = mf;
      model = mo;
      diameter = d;
      water_resistance = w;
      material = mt;
    }
  
    string GetManufacturer() {
      return manufacturer;
    }

    void SetManufacturer(string new_manufacturer) {
      manufacturer = new_manufacturer;
    }

    string GetModel() {
      return model;
    }

    void SetModel(string new_model) {
      model = new_model;
    }

    int GetDiameter() {
      return diameter;
    }

    void SetDiameter(int new_diameter) {
      diameter = new_diameter;
    }

    int GetWaterResistance() {
      return water_resistance;
    }

    void SetWaterResistance(int new_water_resistance) {
      water_resistance = new_water_resistance;
    }

    string GetMaterial() {
      return material;
    }

    void SetMaterial(string new_material) {
      material = new_material;
    }

    void Summary() {
      cout << "Manufacturer: " << manufacturer << endl;
      cout << "Model: " << model << endl;
      cout << "Diameter: " << diameter << " mm" << endl;
      cout << "Water Resistance: " << water_resistance << " m" << endl;
      cout << "Material: " << material << endl;
    }
  
  private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};

==========================


Exercise-3

public:
    Song(string ar, string t, string al) {
      artist = ar;
      title = t;
      album = al;
    }
  
    string GetArtist() {
      return artist;
    }

    void SetArtist(string new_artist) {
      artist = new_artist;
    }

    string GetTitle() {
      return title;
    }

    void SetTitle(string new_title) {
      title = new_title;
    }

    string GetAlbum() {
      return album;
    }

    void SetAlbum(string new_album) {
      album = new_album;
    }

    int GetPlayCount() {
      return play_count;
    }

    double GetMoneyEarned() {
      return money_earned;
    }

    double GetPayRate() {
      return pay_rate;
    }

    void Play(int count) {
      for (int i = 0; i < count; i++) {
        UpdatePlayCount();
        UpdateMoneyEarned();
      }
    }
  
    void Stats() {
      cout << artist << endl;
      cout << title << endl;
      cout << album << endl;
      cout << play_count << endl;
      cout << pay_rate << endl;
      cout << money_earned << endl;
    }
    
    
    ===================================
    
    
    Exercise-4
    
    class Atm {
  public:
    Atm() {}
  
    double GetMoney() {
      return money;
    }
  
    void Deposit(double amount) {
      if (amount <= 0) {
        cout << "You cannot deposit a negative or 0 amount of money." << endl;
      }
      else {
        money += amount;
      }
    }
  
    void Withdraw(double amount) {
      if (amount <= 0) {
        cout << "You cannot withdraw a negative or 0 amount of money." << endl;
      }
      else if (amount > money) {
        cout << "You do not have enough funds to withdraw that amount." <<endl;
      }
      else {
        money -= amount;
      }
    }
  
  private:
    double money = 0;
};


=====================================


Exercise-5

class CardBinder {
  public:
    CardBinder() {}
  
    int GetGold() {
      return gold_card;
    }
  
    int GetSilver() {
      return silver_card;
    }
  
    int GetTotal() {
      return gold_card + silver_card;
    }
  
    void AddGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card + silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        gold_card += amount;
      }
    }
  
    void RemoveGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (gold_card - amount < 0) {
        cout << "You do not have enough gold cards to remove." << endl;
      }
      else {
        gold_card -= amount;
      }
    }
  
    void AddSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card +silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        silver_card += amount;
      }
    }
  
    void RemoveSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (silver_card - amount < 0) {
        cout << "You do not have enough silver cards to remove." << endl;
      }
      else {
        silver_card -= amount;
      }
    }
  
  private:
    int gold_card = 0;
    int silver_card = 0;
};


