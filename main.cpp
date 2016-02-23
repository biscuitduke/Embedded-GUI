#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include "Cell.h"

using namespace std;

int main(){

int ***my3DArray;
int length, width, height;

bool doAgain = true;
string answer("");
string yes("y");

do{
cout << "Enter length ";
cin >> length;
cout << "\nEnter width ";
cin >> width;
cout << "\nEnter height ";
cin >> height;

srand((unsigned)time(NULL));

my3DArray = new int**[length];

Cell cord (length, width, height);

cout<< cord.getXcord()<<endl;
cout<< cord.getYcord()<<endl;
cout<< cord.getZcord() <<endl;

for (int i= 0; i < length; ++i){

    my3DArray[i] = new int*[width];

    for(int j = 0; j< width; ++j){

    my3DArray[i][j] = new int[height];

    for(int k = 0; k < height; ++k){

        my3DArray[i][j][k] = rand()%100;

        cout << my3DArray[i][j][k] << " ";
            }
            cout << endl;

        }
        cout << endl;

    }

    for(int i = 0; i < length; i++){

        for(int j = 0; j < width; j++){

            delete[]my3DArray[i][j];

        }

            delete[]my3DArray[i];
    }

        delete[]my3DArray;

        my3DArray = NULL;

        cout << "Again? (y, n)";

        cin >> answer;

        if(answer.compare(yes) == 0)
            doAgain = true;

        else doAgain = false;

}

while(doAgain == true);

}
