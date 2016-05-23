//
//  main.cpp
//  par ou impar
//
//  Created by Gustavo Henrique Furtado Junqueira on 11/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){

    int number;
    
    cout<<"Enter a number:\n";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " it's pair\n";
    }
    else {
        cout << number << " it is odd\n";
    }
    return 0;
}