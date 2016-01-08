#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	system("COLOR 0A");
	cout<<" ************ RANDOM NUMBER - C++ ************ "<<endl;
	cout<<"In this game it is that you have to hit the 5 attempts number from 1 to 100. Good luck!!"<<endl;
	cout<<"**********************************************"<<endl;
	cout<<endl;
	int secret,attempt,test=5;
	srand(time(NULL));
	secret=rand()%100+1;

	while(test>0) {
		cout<<"I imagined a number. "<<endl;
		cin>>attempt;
		if(secret>attempt) cout<<"The number is higher!! Try again? "<<endl;
		if(secret<attempt) cout<<"The number is smaller!! Try again? "<<endl;
		if(secret==attempt) {

			cout<<"Well done! You guessed it."<<endl;
			system("PAUSE");
			break;
		}
		test--;
	}

	if(test==0) cout<<"You have exceeded the number of attempts! "<<endl;
	system("PAUSE");
	return 0;
}
