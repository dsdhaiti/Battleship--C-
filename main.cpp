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
    
    cout << " to attack please give an x and y value  " << endl;
    do {
        cout << "please give an X / y value" << endl;
        cin >> XVal;
        cin >> YVal;
        cout << "your point of attack is " << Board_Size[XVal][YVal] << endl;
    } while (input);
    
    
    input.close();
    system("pause");
    return 0;
    }



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
