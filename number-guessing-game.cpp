#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	system("clear");
    int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 10 + 1; // random number between 1 and 10
	cout << "The number you input must be a Integer" << endl;
    
	do
	{
		cout << "Please guess a number between 1 and 10: ";
		cin >> guess;
        while(1)
        {
            if(cin.fail())
            {
                cin.clear();
                cout << "You have entered wrong input" << endl;
                cin >> guess;
            }
            if(!cin.fail())
                break;
        }
		tries++;

		if (guess > num)
			cout << "Too high!\n\n Please guess again: ";
		else if (guess < num)
			cout << "Too low!\n\n Please guess again: ";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}