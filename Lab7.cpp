#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//❓❓ LAB QUESTION 4:
string friends[4] = {"Steve", "Jane", "Jeff", "Rick"};


//❓❓ LAB QUESTION 5:
int ages[4] = {34, 25, 52, 18};

void main(){


    //❓❓ Lab Question 6:
    cout << "My friends names are: " << endl;
    for ( int i = 0; i < 4; i++){
        cout << friends[i] << endl;
    }


    //❓❓ Lab Question 7:
    cout << "These are their ages: " << endl;
    for( int j = 0; j < 4; j++){
        cout << friends[j] << " is " << ages[j] << endl;
    }


    //❓❓ Lab Question 8:
   int oldest = 0; 
   for( int i = 0; i < 4; i++ ){
    if ( ages[i] > oldest ){
        oldest = ages[i];
    }
   }
cout << "My oldest friend is " << oldest << " years old." << endl;



    //❓❓ Lab Question 9:
    oldest = 0;
    int oldestFriendIndex = 0;
    for( int i = 0; i < 4; i++){
        if ( ages[i] > oldest ){
            oldest = ages[i];
            oldestFriendIndex = i;
        }
    }
cout << "My oldest friend is named " << friends[oldestFriendIndex] << endl;

}