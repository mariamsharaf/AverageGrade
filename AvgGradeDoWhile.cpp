
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main ( )

{
    
    

   char grade;

   string name;

   double score;

   int aCount=0, bCount=0, cCount=0, dCount=0, fCount=0;

   cout << "Enter student name: " << endl;
    getline (cin, name);
    
  
    
    
   while  (name != "//")

   {
   
       do {
cout << "Enter Student Score <0-100>" << endl;
 cin >> score;
  cin.ignore ( );
       }
       
    while (score < 0 || score > 100);
       

       if (score>=90.0){

           grade = 'A';

            aCount++;

       }

       else if (score>=80.0){

             grade = 'B';

             bCount++;

       }
       
       else if (score>=70.0){

             grade = 'C';

             cCount++;

       }
       
       else if (score>=60.0){

             grade = 'D';

             dCount++;

       }
       else if (score>=50.0){

             grade = 'F';

             fCount++;

       }

       cout << name << " " << score << " " << grade << endl;

       cout << "Enter student name: " << endl;

       getline (cin, name);

       }

 

   int totalCount=aCount+bCount+cCount+dCount+fCount;

   //display summary report
    cout<<"Summary Report:"<<endl;
   cout<<"Total Students count " << totalCount << endl;
    cout<< "A student count: " << aCount <<endl;
    cout<< "B student count: " << bCount <<endl;
    cout<< "C student count: " << cCount <<endl;
    cout<< "D student count: " << dCount <<endl;
    cout<< "F student count: " << fCount <<endl;
 
    return 0;
   }

