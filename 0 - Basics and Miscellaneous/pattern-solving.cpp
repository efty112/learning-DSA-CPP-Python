#include <iostream>
using namespace std;

void pattern1(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        for(int col=0; col<numberOfElement; col++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        for(int col=0; col<=row; col++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2Enhance(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        for(int col=0; col<=row; col++){
            cout << col+1 << " ";
        }
        cout << "\n";
    }
}

void pattern2Enhance2(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        for(int col=0; col<=row; col++){
            cout << row+1 << " ";
        }
        cout << "\n";
    }
}

void pattern3(int numberOfElement){
    // for(int row=0; row<numberOfElement; row++){
    //     for(int col=numberOfElement; col>row; col--){
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    
    // Alternative:
    for(int row=1; row<=numberOfElement; row++){
        for(int col=0; col<numberOfElement-row+1; col++){
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern3Enhance(int numberOfElement){
    for(int row=1; row<=numberOfElement; row++){
        for(int col=0; col<numberOfElement-row+1; col++){
            cout << col+1 << " ";
        }
        cout << "\n";
    }

    // Reverse Way:
    // for(int row=0; row<numberOfElement; row++){
    //     for(int col=numberOfElement; col>row; col--){
    //         cout << col << " ";
    //     }
    //     cout << "\n";
    // }
}

void pattern4(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        // Space
        for (int space=0; space<numberOfElement-row-1; space++){
            cout << " ";
        }

        // Star
        for (int star=0; star<2*row+1; star++){
            cout << "*";
        }

        // Space
        for (int space=0; space<numberOfElement-row-1; space++){
            cout << " ";
        }
        cout << "\n";
    }
}


int main(){
    // ---------- Pattern - 1: ----------
    int numberOfElements;
    cout << "Enter the Number of Element for Pattern-1:";
    cin >> numberOfElements;

    cout << "Printing Pattern-1:" << endl;
    pattern1(numberOfElements);

    // ---------- Pattern - 2: ----------
    cout << "Enter the Number of Element for Pattern-2:";
    cin >> numberOfElements;

    cout << "Printing Pattern-2:" << endl;
    pattern2(numberOfElements);

    // ---------- Pattern - 2 Enhance: ----------
    cout << "Enter the Number of Element for Pattern-2 Enhance:";
    cin >> numberOfElements;

    cout << "Printing Pattern-2 Enhance:" << endl;
    pattern2Enhance(numberOfElements);

    // ---------- Pattern - 2 Enhance - 2: ----------
    cout << "Enter the Number of Element for Pattern-2 Enhance - 2:";
    cin >> numberOfElements;

    cout << "Printing Pattern-2 Enhance - 2:" << endl;
    pattern2Enhance2(numberOfElements);

    // ---------- Pattern - 3: ----------
    cout << "Enter the Number of Element for Pattern-3:";
    cin >> numberOfElements;

    cout << "Printing Pattern-3:" << endl;
    pattern3(numberOfElements);

    // ---------- Pattern - 3 Enhance: ----------
    cout << "Enter the Number of Element for Pattern-3 Enhance:";
    cin >> numberOfElements;

    cout << "Printing Pattern-3 Enhance:" << endl;
    pattern3Enhance(numberOfElements);


    // ---------- Pattern - 4: ----------
    cout << "Enter the Number of Element for Pattern-4:";
    cin >> numberOfElements;

    cout << "Printing Pattern-4:" << endl;
    pattern4(numberOfElements);

    return 0;
}