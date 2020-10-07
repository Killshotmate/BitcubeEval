#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    string fornames,surname,email_address;
    int date_of_birth;
    string first_name,full_name;

    //static int total_number_of_students;

public:
    //creating functions in public so that i can be able to access the object that are in private while iam still in the class
    string getforname(){return fornames;}
    string get_surname(){return surname;}
    string get_email_address(){return email_address;};
    int get_date_of_birth(){return date_of_birth;}
    string get_first_name(){return first_name;}
    string set_full_name(){return full_name;}
    void setforname(string fornames){this->fornames = fornames;}
    void set_surname(string surname){this->surname = surname;}
    void set_email_address(string email_address){this->email_address = email_address;}
    void set_date_of_birth(int date_of_birth){this->date_of_birth =date_of_birth;}
    void set_first_name(string first_name){this->first_name = first_name;}
    void set_full_name(string full_name){this->full_name = full_name;}

    //function to set the values inside our public objects
    void setAlls(string,string,string,int,string,string);
    //create a constructor that is gonna be called each time an object is created
    Student(string,string,string,int,string,string);
    //i create an overload constructor to accomodate when no information is passed
    Student();
    //i also create a de-constructor that is gonna be passed when the object  is no longer being used or deleted
    ~Student();

    //create a function to string so that we can overwrite it
    void to_string();
};
class Lecture{
private:
     string fornames,surname,email_address;
     int date_of_birth;
     string first_name,full_name;

     static  int total_number_of_lectures;

 public:
    string getforname(){return fornames;}
    string get_surname(){return surname;}
    string get_email_address(){return email_address;};
    int get_date_of_birth(){return date_of_birth;}
    string get_first_name(){return first_name;}
    string set_full_name(){return full_name;}
    void setforname(string fornames){this->fornames = fornames;}
    void set_surname(string surname){this->surname = surname;}
    void set_email_address(string email_address){this->email_address = email_address;}
    void set_date_of_birth(int date_of_birth){this->date_of_birth =date_of_birth;}
    void set_first_name(string first_name){this->first_name = first_name;}
    void set_full_name(string full_name){this->full_name = full_name;}

    void setAll(string,string,string,int,string,string);
    Lecture(string,string,string,int,string,string);
    Lecture();

     //function to set the values inside our public objects
    void setAlls(string,string,string,int,string,string);
    //create a constructor that is gonna be called each time an object is created
    //Lecture(string,string,string,int,string,string);
    //i create an overload constructor to accomodate when no information is passed
    //Lecture();
    //i also create a de-constructor that is gonna be passed when the object  is no longer being used or deleted
    ~Lecture();


    //create a function to string so that we can overwrite it
    void to_string();
};
class Degree{
private:
    string degree_name;
    int duration;
    string list_of_other_courses,lecture;

public:
    string get_degree_name(){return degree_name;}
    //,string get_surname(){return surnames;},get_email_address(){return email_address;};
    int get_duration(){return duration;}
    string get_list_of_other_courses(){return list_of_other_courses;}
    string get_lecture(){return lecture;}
    void set_degree_name(string degree_name){this->degree_name = degree_name;}
    //void set_email_address(string email_address){this->email_address = email_address;}
    void set_duration(int duration){this->duration =duration;}
    //void set_surname(string surname){this->surname = surname;}
    void  set_list_of_other_courses(string list_of_other_courses){this->list_of_other_courses = list_of_other_courses;}
    void set_lecture(string lecture){this->lecture = lecture;}

    void setAll(string,int,string,string);
    Degree(string,int,string,string);
    Degree();

     //function to set the values inside our public objects
    void setAlls(string,int,string,string);
    //create a constructor that is gonna be called each time an object is created
    //Degree(string,int,string,string);
    //i create an overload constructor to accomodate when no information is passed
    //Degree();
    //i also create a de-constructor that is gonna be passed when the object  is no longer being used or deleted
    ~Degree();
    //create a function to string so that we can overwrite it
    void to_string();
};
class Course{
private:
    string name;
    int duration;
    string one_or_more_courses_part_of_the_degree;

public:
    string get_name(){return name;}
    int get_duration(){return duration;}
    string get_one_or_more_courses_part_of_the_degree(){return one_or_more_courses_part_of_the_degree;}
    //,string lecture(){return lecture;}
    void get_name(string name){this->name = name;}
    //void set_email_address(string email_address){this->email_address = email_address;}
    void set_duration(int duration){this->duration =duration;}
    //void set_surname(string surname){this->surname = surname;}
    void set_one_or_more_courses_part_of_the_degree(string one_or_more_courses_part_of_the_degree){this->one_or_more_courses_part_of_the_degree = one_or_more_courses_part_of_the_degree;}
    //void set_lecture(string lecture){this->lecture = lecture;}

    //void setAll(string,int,string);
    //Courses(string,int,string);
    //Courses();

     //function to set the values inside our public objects
    void setAlls(string,int,string);
    //create a constructor that is gonna be called each time an object is created
    //Course(string,int,string);
    //i create an overload constructor to accomodate when no information is passed
    //Course();
    //i also create a de-constructor that is gonna be passed when the object  is no longer being used or deleted
    //~Course();
    //create a function to string so that we can overwrite it
    void to_string();
};
//int Student::total_number_of_students = 0;
void Student::setAlls(string forname,string surname,string email_address,int date_of_birth,string first_name,string full_name){
    this->fornames = forname;
    this->surname = surname;
    this->email_address = email_address;
    this->date_of_birth = date_of_birth;
    this->first_name = first_name;
    this->full_name = full_name;

    //Student::total_number_of_students++;
}
//create my constructor
Student::Student(string forname,string surname,string email_address,int date_of_birth,string first_name,string full_name){
    this->fornames = forname;
    this->surname = surname;
    this->email_address = email_address;
    this->date_of_birth = date_of_birth;
    this->first_name = first_name;
    this->full_name = full_name;

    //Student::total_number_of_students++;
}
//create another constructor that deals with when they dont pass an attributes
Student::Student(){
    this->fornames ="";
    this->surname = "";
    this->email_address = "";
    this->date_of_birth = 0;
    this->first_name = "";
    this->full_name = "";

     ///Student::total_number_of_students++;
}
//create my deconstructor
Student::~Student(){
}
void Student::to_string(){
    cout << "user fornames :" << this->fornames << endl;
    cout << "user surname :" << this->surname << endl;
    cout << " user email :" << this->email_address << endl;
    cout << "date of birth :" << this->date_of_birth << endl;
    cout << "user first name :" << this->first_name << endl;
    cout << "user full name :" << this->full_name << endl;
}
Lecture::Lecture(string forname,string surname,string email_address,int date_of_birth,string first_name,string full_name){
    this->fornames = forname;
    this->surname = surname;
    this->email_address = email_address;
    this->date_of_birth = date_of_birth;
    this->first_name = first_name;
    this->full_name = full_name;

    //Student::total_number_of_students++;
}
//create another constructor that deals with when they dont pass an attributes
Lecture::Lecture(){
    this->fornames ="";
    this->surname = "";
    this->email_address = "";
    this->date_of_birth = 0;
    this->first_name = "";
    this->full_name = "";

     ///Student::total_number_of_students++;
}
//create my deconstructor
Lecture::~Lecture(){
}
void Lecture::to_string(){
    cout << "user fornames :" << this->fornames << endl;
    cout << "user surname :" << this->surname << endl;
    cout << " user email :" << this->email_address << endl;
    cout << "date of birth :" << this->date_of_birth << endl;
    cout << "user first name :" << this->first_name << endl;
    cout << "user full name :" << this->full_name << endl;
}
Degree::Degree(string degree_name,int duration,string list_of_other_courses,string lecture){
    this->degree_name = degree_name;
    this->duration = duration;
    this->list_of_other_courses = list_of_other_courses;
    this->lecture = lecture;
    //this->first_name = first_name;
    //this->full_name = full_name;

    //Student::total_number_of_students++;
}
//create another constructor that deals with when they dont pass an attributes
Degree::Degree(){
    this->degree_name ="";
    this->duration = 0;
    this->list_of_other_courses = "";
    this->lecture = " ";
    //this->first_name = "";
    //this->full_name = "";

     //Student::total_number_of_students++;
}
//create my deconstructor
Degree::~Degree(){
}
void Degree::to_string(){
    cout << "user fornames :" << this->degree_name << endl;
    cout << "user surname :" << this->duration << endl;
    cout << " user email :" << this->list_of_other_courses << endl;
    cout << "date of birth :" << this->lecture << endl;
    //cout << "user first name :" << this->first_name << endl;
    //cout << "user full name :" << this->full_name << endl;
}
int main()
{
    Student User;
    User.to_string();
    User.setforname("R.R");
    User.set_surname("Mangena");
    User.set_full_name("Romeo Mangena");
    User.set_date_of_birth(20);
    User.set_first_name("Romeo");
    User.set_email_address("abrahamromeom@gmail.com");
    User.to_string();
    return 0;
}
