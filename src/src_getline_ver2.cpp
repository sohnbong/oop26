#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main() 
{
    cout << "[student_id] [name] [department] [age] [GPA(score)]\n";
    
    string student_id;
    string name;
    string dept;
    int age;
    double GPA;
    double GPA_total=0.0;
    string linestr;
    int count=0;


//    while (getline(cin,linestr)) {
  ifstream myfile("example.txt");
  while (getline(myfile,linestr)) {
        if (linestr.empty()) break;

        student_id=linestr.substr(0,8);
        name=linestr.substr(10,10);
        dept=linestr.substr(20,10);
        age=stoi(linestr.substr(30,3));
        GPA=stod(linestr.substr(40,4));

        cout << "student_id: " << student_id << "\n";
        cout << "name: " << name << "\n";
        cout << "department: " << dept << "\n";
        cout << "age: " << age << "\n";
        cout << "GPA(score): " << GPA << "\n";
        GPA_total += GPA;
        count++;
    }
  myfile.close();
    cout << "GPA average: " << GPA_total/count << "\n";

    return 0;
}
