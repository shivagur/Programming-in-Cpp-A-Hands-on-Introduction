Exercise-1

class Hello {
  public:
    void PrintHello() {
      cout << "Hello" << endl;
    }
};

===========

Exercise-2

enum seasons {winter = 1, spring, summer, fall};

===========

ex-3

struct Student {
  string name = "Amy";
  int age = 18;
  string major = "Physics";
};

=============

Exercise-4

class Person {
  public:
    static string name;
  
    static string GetName() {
      return name;
    }
};

==============

Exercise-5


static bool CompareStudents(Student s1, Student s2) {

  return s1.name == s2.name && s1.student_id == s2.student_id;
}
  

