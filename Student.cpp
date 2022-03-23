#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int SID, char s_name[20]) {
  studentID = SID;
  strcpy(name,s_name);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : " << studentID << endl;
  cout << "Student Name : " << name << endl;
}
