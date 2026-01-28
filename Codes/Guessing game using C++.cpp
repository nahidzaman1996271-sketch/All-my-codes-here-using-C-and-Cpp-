#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
int guess, random_number;
while (1){
cout << "Enter the number you guessed (1 to 5): ";
cin >> guess;
cout << endl;
random_number = 1 + rand()%5;
if(random_number == guess){
 cout <<"You are correct." << endl << endl;
 cout << "Congratulations." << endl;
 break;
}
else{
cout << "You're wrong."<< endl;
cout << endl;
cout << "The random number was: " << random_number << endl<<endl;
cout <<"==========" << endl << endl;;
}
}
getch();
return 0;

}
