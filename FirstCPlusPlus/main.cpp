//
//  main.cpp
//  FirstCPlusPlus
//
//  Created by Bullough, Amber on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    // insert code here...
    std::cout << "Hello, World!" << endl;
    
    string word;
     getline(cin, word);
    //cin >> word;  // String to add scanner for single word
    cout << "Hello " << word << endl;
    cout << (3 + 5 * 43) << endl;
    
    
    getline(cin, word);
    
    return 25;
}
