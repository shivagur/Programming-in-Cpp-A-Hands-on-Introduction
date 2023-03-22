Exercise-1

class VectorAddSix : public VectorAddThree {
  public:
    vector<int> Add() {
      nums.push_back(num1);
      nums.push_back(num2);
      nums.push_back(num3);
      nums.push_back(num4);
      nums.push_back(num5);
      nums.push_back(num6);
      return nums;
    }
  
  protected:
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;
  
  private:
    vector<int> nums;
};

=================

Exercise-2

class Airplane : public Vehicle {
  public:
    Airplane(double s) {
      speed = s;
    }
  
    void Distance(double time) {
      cout << speed * time << endl;
    }
    
  private:
    double speed;
};

====================

Exercise-3

class Conversion : public Temperature {
  public:
    double ConvertTo(char unit, double temp) {
      if (unit == 'C' || unit == 'c') {
        return Celsius(temp);
      } 
      else if (unit == 'F' || unit == 'f') {
        return Fahrenheit(temp);
      }
      return -0.0001;
    }
  
  private:
    double Celsius(double temp) {
      return (temp - 32) / 1.8;
    }
  
    double Fahrenheit(double temp) {
      return temp * 1.8 + 32;
    }
};

===================

Exercise-4

class Median {
  public:
    double CalculateMedian(int n1, int n2) {
      return (double) (n1 + n2) / 2;
    }
  
    double CalculateMedian(int n1, int n2, int n3) {
      vector<int> nums = {n1, n2, n3};
      sort(nums.begin(), nums.end());
      return nums.at(1);
    }

    double CalculateMedian(int n1, int n2, int n3, int n4) {
      vector<int> nums = {n1, n2, n3, n4};
      sort(nums.begin(), nums.end());
      return (double) (nums.at(1) + nums.at(2)) / 2;
    }

    double CalculateMedian(int n1, int n2, int n3, int n4, int n5) {
      vector<int> nums = {n1, n2, n3, n4, n5};
      sort(nums.begin(), nums.end());
      return nums.at(2);
    }
};

===================================

Exercise-5

class Substitute : public Words {
  public:
    Substitute(string s2) : Words(s2) {
      input_string = s2;
    }
  
    string SubstituteChar() {
      string sub;
      if (input_string.length() < 5) {
        return "Not enough characters";
      }
      else {
        for (int i = 0; i < input_string.length(); i++) {
          if (i == 4) {
            sub += "HELLO";
          }
          else {
            sub += input_string.at(i);
          }
        }
      }
      return sub;
    }
  
  private:
    string input_string;
};
