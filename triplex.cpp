// #Preprocessor Directive <Header File>
#include <iostream> // for cin and cout
#include <ctime> // for rand seed based off comp time
using namespace std;

void PrintIntro(int Difficulty)
{
    cout << "\n\nYou are breaking into your mom's level " << Difficulty;
    cout << " Gucci bag so you can get some cash for the mall...\n";
    cout << "Gucci got their shit on lock! You betta break the code henny!\n";

}

bool PlayGame(int Difficulty)
{
    PrintIntro(Difficulty);

    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    cout << "\nHere's what you know:\n";
    cout << "+ There are three numbers in the code.\n";
    cout << "+ The sum of the three numbers is " << CodeSum << endl;
    cout << "+ The numbers multiplied together get " << CodeProduct << endl;

    cout << endl << "Enter your guesses girl!\n(Use spaces in between numbers)\n";
    int GuessA, GuessB, GuessC;
    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;
    cout << "You tried: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    cout << endl;
    cout << "Guessed Sum: " << GuessSum << endl;
    cout << "Guessed Product: " << GuessProduct << endl;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "You got a match! Git moneyyy!!\n";
        return true;
    }
    else
    {
        cout << "Wrong!! Hurry before she catches yo theivin ass!!\n";
        return false;
    }
}


int main()
{
    srand(time(NULL)); // seed rand() based off time of day

    int LevelDifficulty = 1;
    const int MAX_LEVEL = 3;
   
    while (LevelDifficulty <= MAX_LEVEL) // Loop the game until the highest level is complete
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); // Clears any errors
        cin.ignore(); // Discards the buffer
    
    
        if (bLevelComplete)
        {
            // Increase level difficulty
            ++LevelDifficulty;
        }
    }
    cout << "\nOk that's all of them! Now get your ungrateful clepto ass to the mall!!\n";
    cout << "...Also, you might want to get a lil somethin for ya motha..";
    return 0;
}