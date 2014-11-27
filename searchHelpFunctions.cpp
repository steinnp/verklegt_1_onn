//
//  searchHelpFunctions.cpp
//  skil1_verklegt
//
//  Created by Steinn Elliði Pétursson on 27/11/14.
//  Copyright (c) 2014 Steinn Elliði Pétursson. All rights reserved.
//

#include "searchHelpFunctions.h"
#include <iostream>
#include "Man.h"
#include "searchfunction.h"
#include <vector>


using namespace std;

void nameSearch(bool first, vector<Man> famousProgrammer, string name){
    
    if(first){
        for(int n = 0; n < famousProgrammer.size(); n++){
            if(famousProgrammer[n].getLast() == name){
                cout << famousProgrammer[n];
            }
        }
    }
    else{
        for(int n = 0; n < famousProgrammer.size(); n++){
            if(famousProgrammer[n].getFirst() == name){
                cout << famousProgrammer[n];
            }
        }
        
    }
}

void searchYear(bool first, vector<Man> famousProgrammer, int year){
    
    if(first){
        for(int n = 0; n < famousProgrammer.size(); n++){
            if(famousProgrammer[n].getBirthyear() == year){
                cout << famousProgrammer[n];
            }
        }
    }
    else{
        for(int n = 0; n < famousProgrammer.size(); n++){
            if(famousProgrammer[n].getDeathyear() == year){
                cout << famousProgrammer[n];
            }
        }
        
    }
}
