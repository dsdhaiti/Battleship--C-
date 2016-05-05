//
//  main.cpp
//  CSIS_111_lab_9
//
//  Created by Sedar  on 4/25/16.
//  Copyright (c) 2016 David D'Haiti. All rights reserved.
//





#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

const char xAxis = 25;
const char yAxis = 25;

using namespace std;
void Fire(char);
bool FleetSunk(char);
int main(){

    int XVal;
    int YVal;
    char Board_Size[xAxis][yAxis];
    ifstream input;


    input.open("Master_table.txt");

    cout << "lets play BattleShip" << endl;
    for (int i = 0; i < xAxis; i++){
        for (int j = 0; j < yAxis; j++){
            input >> Board_Size[i][j];
        }
    }

    for (int i = 0; i < xAxis; i++){
        for (int j = 0; j < yAxis; j++){
            cout << Board_Size[i][j];
        }
        cout << endl;
    }

    while (shipSunk){

  		cout << "To attack please give an x and y value  " << endl;
  		cout << "Please give an X value 1 through 25 " << endl;
  		cin >> XVal;
  		cout << "Please give an Y value 1 through 25 " << endl;
  		cin >> YVal;

  		cout << "Your point of attack is " << BoardSize[XVal][YVal] << endl;

  		Fire(BoardSize[XVal][YVal]);



  		// placing of hit/miss marker
  		switch (BoardSize[XVal][YVal]){

  		case '#':

  			BoardSize[XVal][YVal] = 'H';

  			break;

  		case '~':
  			BoardSize[XVal][YVal] = 'M';

  			break;
  		case 'H':
  			cout << " HIT AGAIN" << endl;
  			break;

  		default:
  			break;
  		}

  		// give back updated board
  		for (int j = 0; j < xAxis; j++){
  			for (int i = 0; i < yAxis; i++){
  				input >> BoardSize[i][j];
  			}

  		}
  		// Board placed in Array
  		for (int j = 0; j < xAxis; j++){
  			for (int i = 0; i < yAxis; i++){
  				cout << ' ' << BoardSize[i][j];
  			}
  			cout << endl;
  		}


  		// call for when the game is done

  		shipSunk = FleetSunk(BoardSize);

    input.close();
    system("pause");
    return 0;
    }
    void  Fire(char n){
        if (n == '~'){
            cout << "MISS" << endl;
        }

        else if (n == '#'){
            cout << "HIT " << endl;
        }

    }

    bool FleetSunk(char BoardSize[xAxis][yAxis])
    {
        for (int j = 0; j < xAxis; j++){
            for (int i = 0; i < yAxis; i++){
                if (BoardSize[i][j] == '#')
                    return true;
            }

        }
        cout << "All enemies dead. The fleet is destroyed." << endl;
        return false;
    }
    //ALGORITHIM


// Should i use a class??
//     - i will be able to organize all my function
//     - i can have them all communicate with them selves


/*
 1.CREATE 2 TABLES
    - ONE TABLE IN A FILE (done)
         ~~~~####~~
         ~~#~~~~~~~
         ~~#~~~~~~~
         ~~#~~~~~~~
         ~~#~~~#~~~
         ~~~~~~~#~~
         ~~~~~~~~#~
         ~~~~###~~~
         ~~~~~~~~~~
         ~~~~~~~~~~
    - ONE TABLE FOR THE USER THEMSELVES(Done)

        * Can a strut be used outside of the function in which it is held

 2. SHOW BOARDS
    * THIS IS HOW TO SHOW THE UNMARKED CHART TO THE USER(Done )

                for (int i = 0; i < height; i++){
                    cout << '&';
                    for (int j = 0; j < width; j++){
                        cout << setw(2) << '&';
                            }
                        cout   << endl;
                    }

 3. PROMPT PLAYER ON HOW TO ATTACK A CERTIAN AREA(Done )
    - tell to attack
    - how does it work when he attacks
        * put their point of attack in to an array
        *

            * if i did it using a class what would my
                    -funcitons
                    -variables


 4. PROMPT PLAYER TO ATTACK
 5. ATTACK ACTION
 6. ATTACK RESPONSE
 7. GAME WIN / LOSE RESPONSE
 8. TELL THE PLAYER THE NUMBER OF TIMES THAT ATTACKED


 */;
