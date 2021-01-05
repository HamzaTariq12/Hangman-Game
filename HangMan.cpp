#include <iostream>
using namespace std;
int main ()
{
string player1,player2,word,underscore,guess;
int wrong=0;


	cout << " ======================================================================================================================" << endl;
	cout << " |                                      _   _                  ___  ___                                               |" << endl;
	cout << " |                                     | | | |                 |  \\/  |                                               |" << endl;
	cout << " |                                     | |_| | __ _ _ __   __ _| .  . | __ _ _ __                                     |" << endl;
	cout << " |                                     |  _  |/ _` | '_ \\ / _` | |\\/| |/ _` | '_ \\                                    |" << endl;
	cout << " |                                     | | | | (_| | | | | (_| | |  | | (_| | | | |                                   |" << endl;
	cout << " |                                     \\_| |_/\\__,_|_| |_|\\__, \\_|  |_/\\__,_|_| |_|                                   |" << endl;
	cout << " |                                                         __/ |                                                      |" << endl;
	cout << " |                                                        |___/                                                       |" << endl;
    cout << " |                                                                                                                    |" << endl;
	cout << " ======================================================================================================================" << endl;	

    cout << "                                          *****Welcome to the HANGMAN game!*****                                       " << endl;
    cout << "   ENTER YOUR NAMES" << endl;
    cout << "   ----------------" << endl;
    cout << endl;
cout << "   PLAYER-1 NAME:  ";
cin >> player1;
cout << endl;
cout << "   PLAYER-2 NAME:  ";
cin >> player2;
cout << endl;
cout << endl;
	cout << " ====================================================================================================================== "<< endl;
cout << endl;
cout << "   " << player1 << " and " << player2 << ". Let's start with the Game! ";
cout << player1 << " give " << player2 << " a word to guess." << endl;
cout << endl;
cout << endl;
cout << "   WORD:";
cin >> word;

//SPACE
for (int x=0; x<30; x++){
cout << endl;
}



//UNDERSCORE
while (underscore.size() != word.size()){
underscore.push_back('_');}

cout << underscore << endl;

//MAIN WHILE
while(wrong<12){
cin >> guess;

//IF GUESS IS CORRECT
if(guess==word){
cout << "Thats the right word." << endl;
break;
}
//IF GUESS IS NOT CORRECT
else{
cout << underscore << endl;
cout << "Wrong word try again." << endl;
wrong ++;
}

  
if(wrong==1){
	for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    +              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  | GUESSES LEFT: 11  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==2){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    +              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  | GUESSES LEFT: 10  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==3){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    +              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 9  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==4){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    +              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 8  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==5){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 7  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==6){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 6  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==7){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |     O        |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 5  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==8){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |     O        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 4  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==9){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |     O        |" << endl;
cout << "                                                  |    |    /|        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 3  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==10){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |     O        |" << endl;
cout << "                                                  |    |    /|\\       |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |              |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 2  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==11){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |     O        |" << endl;
cout << "                                                  |    |    /|\\       |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |    /         |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 1  |" << endl;
cout << "                                                  |___________________|" << endl;
}
else if(wrong==12){
		for (int x=0; x<11; x++){
cout << endl;
}
cout << "                                                   ___________________ " << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |    + ----+        |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |     O        |" << endl;
cout << "                                                  |    |    /|\\       |" << endl;
cout << "                                                  |    |     |        |" << endl;
cout << "                                                  |    |    / \\       |" << endl;
cout << "                                                  |    +==========|   |" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                  |                   |" << endl;
cout << "                                                  |  GUESSES LEFT: 0  |" << endl;
cout << "                                                  |___________________|" << endl;
cout << "                                                      YOU ARE DEAD!" << endl;

cout << "                                              GAME OVER! The word was: " << word << endl;
break;
}
}//MAIN WHILE
}//BODY
