// This allows me to do inout and output
// Think of a stream of data
#include <iostream>
//this allows me to work with strings
#include <string>

// So I dont have to type std:: in front of each line 
//and this should go under the includes and above everything else.
using namespace std;

// Global Varibles
// This is the palyers rank
string playerRank;
// This is a a varible that will hold the players health
// It strats at 100 %.
int playersHealth = 100;

// Declare / Prototype functions I will use
// the pattern for each function is the same!
//return type : Name of functions : (O or more parameters)
// { Curly Braces as your scope operators } 
void DisplayIntro();
string GetUserName();
void WelcomeUser(string userName);
void DisplayPlayerRank();
int FindWaterScenario();
void DisplayPlayerHealth();
int FindFoodScenario();
int FindIntelligentLifeScenario();

// main function which is where all C++ programs start
//return type : Name of functions : (O or more parameters)
// { Curly Braces as your scope operators } 
int main()
{
	// We are assigning a value to the global var playerRank
	playerRank = "Cadet";
	//Calling the function to display intro
	DisplayIntro();
	//Create local varible to hold username
	string localMainUserName;
	//Get User Name will return a value which we can assign localMainUserName var
	localMainUserName = GetUserName();
	//Now we can pass a copy of the value localMainUserName to the Welcome User Function.
	WelcomeUser(localMainUserName);
	//Display health before entering scenario
	DisplayPlayerHealth();
	system("pause");
	// Start the Find water Scenario
	int localResultScore = FindWaterScenario();
	playersHealth = playersHealth + localResultScore;
	//Display health after scenario
	DisplayPlayerHealth();
	system("pause");
	// Start Find Food Scenario
	int local1ResultScore = FindFoodScenario();
	playersHealth = playersHealth + local1ResultScore;
	DisplayPlayerHealth();
	system("pause");
	// Start Find Intelligent Scenario
	int local2ResultScore = FindIntelligentLifeScenario();
	playersHealth = playersHealth + local2ResultScore;
	DisplayPlayerHealth();
	//Tell the user to exit when they are ready
	cout << "\nWhen you're finished ";
	system("pause");
	//Ends the main function, which also ends our program.
	return 0;
}
// body of functions below main
//return type : Name of functions : (O or more parameters)
//Find fresh water scenario requires player to make the correct choice to find a water source to survive on the red planet
int FindWaterScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\n\nYou have just landed on Mars, but your water maker is broke. You need to find ";
	cout << "\nfresh water fast or you and your crew will perish.\n\n";
	cout << "\nAfter exiting the ship, to the West you hear a growling, and to the East you hear water splashing on a beach.\n";
	cout << "\nWhich way would you like to go? (W or E) ";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "W")
	{
		cout << "\nYou have chosen poorly and get bitten by a martian bear and lose 25 health points.\n";
		pointsResults = -25;
		// return -25;
	}
	else if (localPlayerChoice == "E")
	{
		cout << "\nYou have chosen wisely and find water and this gives you an increase of 25 health points.\n";
		pointsResults = 25;
		// return 25;
	}
	else
	{
		cout << "\nYou are not making clear choices and are walking in circles causeing you to lose 10 health points to thrist.\n";
		pointsResults = -10;
		// return -10;
	}
	return pointsResults;
}
//Find food scenario requires player to make the correct choice to find a food source to survive on the red planet
int FindFoodScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\n\nYou are now in need of food, but you left your ship unsecure in search of water that a martian bear stole all your food.";
	cout << "\nYou recall seeing a route running North to South.\n\n";
	cout << "\nTo the North you see a herd of animals, and to the South you see a grove of trees.\n";
	cout << "\nWhich way would you like to go? (N or S) ";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "N")
	{
		cout << "\nYou have chosen poorly and get trampled by a martian sheep and lose 25 health points.\n";
		pointsResults = -25;
		// return -25;
	}
	else if (localPlayerChoice == "S")
	{
		cout << "\nYou have chosen wisely and find fresh fruit and this gives you an increase of 25 health points.\n";
		pointsResults = 25;
		// return 25;
	}
	else
	{
		cout << "\nYou are not making clear choices and are walking in circles causeing you to lose 10 health points to hunger.\n";
		pointsResults = -10;
		// return -10;
	}
	return pointsResults;
}
//Find intelligent life scenario requires player to fulfill his duties and find intelligent life.
int FindIntelligentLifeScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\n\nYou are now in search of intelligent life on planet Mars. ";
	cout << "\nYour shipmates claim to have seen what looks like villages to the North West and South East. \n\n";
	cout << "\n The village to the North West sounds like a rowdy group and dont like strangers, and the group to the South East ";
	cout << "\nseem calm and welcoming to strangers.";
	cout << "\nDo you want to observe the village to the NW or SE?\n";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "NW")
	{
		cout << "\nYou have chosen to observe the barbaric martian tribe and lose 25 health points.\n";
		pointsResults = -25;
		// return -25;
	}
	else if (localPlayerChoice == "SE")
	{
		cout << "\nYou have chosen to observe the melevolent tribe and they gain 25 health points.\n";
		pointsResults = 25;
		// return 25;
	}
	else
	{
		cout << "\nYou are not making clear choices and are walking in circles causeing you to lose 10 health points to failure to make contact.\n";
		pointsResults = -10;
		// return -10;
	}
	return pointsResults;
}
void DisplayIntro()
{
	cout << "\n\n\n\t*** Mission to Mars ***\n\n";
	cout << "\n In this sim you are a Space Cadet that has just landed on a new base on Planet Mars!\n";
	DisplayPlayerRank();
	return;
}

string GetUserName()
{
	cout << "\n What is your name?";
	// This is a local varible
	string userName; 
	//this is what actually gets the user input
	//remember never to use cin with getline in the same program.
	getline(cin, userName);
	return userName;
}

void WelcomeUser(string localUserName)
{
	cout << "\n Welcome Commander " + localUserName;
}

void DisplayPlayerRank()
{
	cout << "\n Your Current Rank is " + playerRank <<endl;
}
void DisplayPlayerHealth()
{
	cout << "\n Your Current Player Health is " << playersHealth << endl;
	return;
}
