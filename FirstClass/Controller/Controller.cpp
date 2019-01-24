//
//  Controller.cpp
//  FirstClass
//
//  Created by Perkins, Ryan on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this -> specialNumber = 31415;
}

void Controller :: start()
{
    cout << "This is the start method :P" << endl;
    cout << "And *this* is a class number: " << specialNumber << " It's all about pi over here" << endl;
    string input;
    cout << "Type your name" << endl;
    getline(cin, input);
    cout << input << endl;
    cout << "It's weird that the ended exit line happened before this line?" << endl;
}
