#include <iostream>
using namespace std;


//A Sentinel Controlled Program to calculate the average age of people using a while loop//
int main (){
    int age;
    int ageTotal =0;
    int numberOfPersonsEntered = 0;

    cout <<"Enter persons age 0r -1 to quit"<< endl;
    cin>>age;

    while(age != -1){
        ageTotal = ageTotal + age;
        numberOfPersonsEntered++;
        cout<<"Enter next persons age or -1 to quit "<<endl;
        cin>>age;

    }
    cout<<"Number of people entered "<<numberOfPersonsEntered<<endl;
    cout<<"The Average age is "<<ageTotal/numberOfPersonsEntered<<endl;

    return 0;
}
