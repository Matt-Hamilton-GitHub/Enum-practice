



#include <iostream>
#include <string>

using namespace std;

int main() {

//create enumeration type -- enum typeName {VALUE1, VALUE2,...}
enum newDataType : char {

  RICKY = 55, 
  JOHN, 
  SARAH, 
  MATT = 60

  };

//declaring variables: dataType identifier, identifier, ....;
newDataType historyStudents = MATT, politStudents = SARAH;




//assignemt 
historyStudents = MATT;

cout << "Value before: " << historyStudents << endl;
//operations: 

historyStudents = static_cast<newDataType>(historyStudents + 10);

// historyStudents = static_cast<newDataType>(historyStudents - 1);
 
// historyStudents = static_cast<newDataType>(historyStudents / 6);
bool compare = MATT <= RICKY;
bool compare2 = MATT >= RICKY;

cout << "Value after: " << historyStudents << endl;

cout <<boolalpha << "MATT < RICKY - " << compare << endl ;
cout <<boolalpha << "MATT > RICKY - " << compare2 << endl ;

for (historyStudents = RICKY; historyStudents <= MATT;  historyStudents = static_cast<newDataType>(historyStudents + 1)){
  cout<< historyStudents << endl;
}

cout << "SARAH EQUALS TO " << SARAH << endl;


return 0;
}