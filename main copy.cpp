//
//  main.cpp
//  CSIS_111_lab_9
//
//  Created by Sedar  on 4/25/16.
//  Copyright (c) 2016 David D'Haiti. All rights reserved.
//

//                      DO NOT CODE TILL ALGORITHIM IS CREATED



#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
   const int xAxis = 25;
    const int yAxis =25;
    
        for (int i = 0; i < xAxis; i++){
            cout << '~';
            for (int j = 0; j < yAxis; j++){
                cout << setw(2) << '~';
            }
            cout << endl;
        }
  

    system("pause");
    return 0;
    }


//                      DO NOT CODE TILL ALGORITHIM IS CREATED
// Should i use a class


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
 
        int main(){
        int height;
        int width;
        int time_done = 0;
            
 
                for (int i = 0; i < height; i++){
                    cout << '&';
                    for (int j = 0; j < width; j++){
                        cout << setw(2) << '&';
                            }
                        cout   << endl;
                    }
 
                system("pause");
                return 0;
 
 3. PROMPT PLAYER ON HOW TO ATTACK A CERTIAN AREA
    - tell to attack 
    - how does it work when he attacks
 
            * if i did it using a class what would my 
                    -funcitons
                    -variables 
 
 
 4. PROMPT PLAYER TO ATTACK
 5. ATTACK ACTION
 6. ATTACK RESPONSE 
 7. GAME WIN / LOSE RESPONSE 
 8. TELL THE PLAYER THE NUMBER OF TIMES THAT ATTACKED
 
 
 */;
