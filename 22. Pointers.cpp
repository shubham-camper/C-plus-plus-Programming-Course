 #include <iostream>
 using namespace std;
 
 int main()
 {
     int age = 19;
     int *pAge = &age;
     double gpa = 2.7;
     double *pGpa = &gpa; 
     string name = "Mike";
     string *pName = &name; 
     cout << &age << endl;
     
     cout << "Age: " << &age << endl;
     cout << "Gpa: " << &gpa << endl;
     cout << "Name: " << &name << endl;
     
     cout << pAge << endl;
     cout << *pAge << endl;
     cout << &age << endl;
     cout << *&age << endl;
     
     return 0;
 }