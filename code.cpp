#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
bool gussed = false;               //globale for break a loop
int gussedit = 0 ;                //globale for save randum number 
int randum();        
int takeguess(int )	;
void main() {
	srand(time(0));                   //for change randum number every time
	gussedit = randum();              //initilize globle variable
	int u=0,s=0;                      //u for input and s for output trise
//	cout << gussedit << endl;         //for check randum number store in globle verible
	cout << "\t\t                 Wellcome in -:*usama*:- randum number guess Game " << endl << endl;
	cout << "\t\t                       ***lets start check your mind ***" << endl;
	cout << "\t\t-----------------------------------------------------------------------------------------" << endl;
	cout << "\t\t                              *Enter your guesses* " << endl;
	                                  //while (gussedit != u) {  //use this condition if not use bool type
	int i = 0;
	while(i<9999999){
		
		cout << endl << "\t\t\t\t\t\t      "; cin >> u;  
			s=takeguess(u);
		if (gussedit == u) {
			cout << endl << "\t\t                                 congrajulations! " << endl;
		}
		else {
			cout << endl << "\t\t                                     sorry  " << endl;
		}
		if (u < gussedit) {
			cout << endl << "\t\t                                    'Hint' " << endl;
			cout << endl << "\t\t           You enter a lower number. please Enter a higher number :-  " << endl;
		}
		if (u > gussedit) {
			cout << endl << "\t\t                                    'Hint' " << endl;
			cout << endl << "\t\t           You enter a higher number. please  Enter a lower number :-  " << endl;
		}
		
		if (gussed == true) {
			break;
			
		}
		i++;
	}
	cout <<endl <<"\t\t                           *you guess the number in "<<s<<" tries*"<<endl;
	
	_getch();
}
int randum() {  //**defination **
	
	return 1 + rand() % 29; //create nd return a randum number
}
int takeguess(int a) {  //*defination*
	
int static q = 0;  //for count tries
q++;

if (a == gussedit) {   //change the bool globle verable value
	gussed = true;
	return q;            //return  total time call the function 
}


}

	
