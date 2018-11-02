#include "TextAdventure.h"

TextAdventure::TextAdventure() {
}

int main() {

    bool gameIsRunning = true;
    while( gameIsRunning ) {
        string playerName;
        string playerInput;

        cout << "Hello there, welcome to my text adventure game!" << endl;
        cout << "Can I have your name?\n" << endl;
        cin >> playerName;

        cout << "\nNice to meet you " << playerName << "!\n" << endl;

        cout << "We will now begin the adventure, have a good time!\n" << endl;

        /*cout << "Press Enter to Continue\n" << endl;
        cin.get();*/

        cout << "You are on a dirt road in the middle of Nowhere. There is a fork in the road ahead of you going East and North.\nWhich way would you like to go?" << endl;
        cin >> playerInput;

        if( playerInput == "East" ) {
            cout << "In front of you lies a dark forest, would you like to enter the forest?\n1. Yes\n2. No" << endl;
            cin >> playerInput;
            if( playerInput == "Yes" ) {
                cout << "You entered the forest and were immediately attacked by a giant spider.\nGame Over.clear Would you like to restart?\n1. Yes\n2. No" << endl;
                cin >> playerInput;
                if( playerInput == "No" || playerInput == "no" ) {
                    gameIsRunning = false;
                }
                else if( playerInput!= "Yes" || playerInput != "yes" ) {
                    cout << "That is not a valid input, please type 'Yes' or 'No'" << endl;
                    cin >> playerInput;
                    if( playerInput == "No" || playerInput == "no" ) {
                        gameIsRunning  = false;
                    }
                }
            }
            else if( playerInput != "No" || playerInput == "no" ) {
                cout << "That is not a valid input, please type 'Yes' or 'No'" << endl;
                cin >> playerInput;
                if( playerInput == "Yes" ) {
                cout << "You entered the forest and were immediately attacked by a giant spider.\nGame Over. Would you like to restart?\n1. Yes\n2. No" << endl;
                cin >> playerInput;
                if( playerInput == "No" ) {
                    gameIsRunning = false;
                }
            }
            }
            else {
                cout << "You can either enter the forest or go back West, would you like to go back West?\n1. Yes\n2. No" << endl;
                cin >> playerInput;
                if( playerInput == "No" ) {
                    cout << "You died because you stayed in one place for too long.\n Game Over. Would you like to restart?\n1. Yes\n2. No" << endl;
                    cin >> playerInput;
                    if( playerInput == "No" ) {
                        gameIsRunning = false;
                    }
                    else if( playerInput != "Yes" ) {
                        cout << "That is not a valid input, please type 'Yes' or 'No'" << endl;
                        cin >> playerInput;
                        if( playerInput == "No" ) {
                            gameIsRunning = false;
                        }
                    }
                }
                else if( playerInput != "Yes" ) {
                    cout << "That is not a valid input, please type 'Yes' or 'No'" << endl;
                    if( playerInput == "No" ) {
                    cout << "You died because you stayed in one place for too long.\n Game Over. Would you like to restart?\n1. Yes\n2. No" << endl;
                    cin >> playerInput;
                    if( playerInput == "No" ) {
                        gameIsRunning = false;
                    }
                    else if( playerInput != "Yes" ) {
                        cout << "That is not a valid input, please type 'Yes' or 'No'" << endl;
                        cin >> playerInput;
                        if( playerInput == "No" ) {
                            gameIsRunning = false;
                        }
                    }
                }
                }
            }
        }
        else if ( playerInput == "North" ) {
            cout << "You've come to another fork in the road leading East and West, which way would you like to go?" << endl;
            cin >> playerInput;
            if( playerInput == "East") {
                cout << "In front of you there is a cave and a road leading to a mysterious looking castle. Would you like to go to the cave or the castle?" << endl;
                cin >> playerInput;
                if( playerInput == "Cave" || playerInput == "cave" ) {
                    cout << "You enter the cave and discover the Sword of Destiny!\nYou Win!\nWould you like to restart?\n1. Yes\n2. No" << endl;
                    cin >> playerInput;
                    if( playerInput == "No" ) {
                        gameIsRunning = false;
                    }
                    else if( playerInput != "Yes" ) {
                        cout << "That is not a valid input, please type 'Yes' or 'No'" << endl;
                        cin >> playerInput;
                        if( playerInput == "No" ) {
                            gameIsRunning = false;
                        }
                    }
                }
                else if( playerInput == "Castle" || playerInput == "castle" ) {
                    cout << "As you are walking to the castle you trigger an explosive trap and are blown away!\nGame Over. Would you like to restart?\n1. Yes\n2. No" << endl;
                    cin >> playerInput;
                    if( playerInput == "No" ) {
                        gameIsRunning = false;
                    }
                    else if( playerInput != "Yes" ) {
                        cout << "That is not a valid input, please type 'Yes' or 'No'" << endl;
                        cin >> playerInput;
                        if( playerInput == "No" ) {
                            gameIsRunning = false;
                        }
                    }
                }
            }
        }
    }
}