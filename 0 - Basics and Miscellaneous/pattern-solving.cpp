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

void pattern5(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        // Space
        for (int space=0; space<row; space++){
            cout << " ";
        }

        // Star
        for (int star=0; star<2*(numberOfElement-row) - 1; star++){
            cout << "*";
        }

        // Space
        for (int space=0; space<row; space++){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern6(int numberOfElement){
    int upsideElement = numberOfElement/2;
    int downsideElement = numberOfElement - upsideElement;
    
    pattern4(numberOfElement);
    pattern5(numberOfElement);
}

void pattern7(int numberOfElement){
    int midRow = (numberOfElement+1)/2;
    
    for (int row=0; row<numberOfElement; row++){
        if(row<midRow){
            for (int star=0; star<=row; star++){
                cout << "* ";
            }
            cout << endl;
        }
        else {
            for (int star=0; star<((midRow*2) - row - 1); star++){
                cout << "* ";
            }
            cout << endl;
        }
    }
}

void pattern8(int numberOfElement){
    int start = 1;
    for(int row=0; row<numberOfElement; row++){
        if (row%2 == 0) start = 1;
        else start = 0;

        for(int col=0; col<=row; col++){
            cout << start;
            start = 1 - start;
        }
        cout << "\n";
    }
}

void pattern9(int numberOfElement){
    for(int row=1; row<=numberOfElement; row++){
        for (int num=1; num<=row; num++){
            cout << num;
        }
        for (int space=1; space <= 2*(numberOfElement-row); space++){
            cout << " ";
        }
        for (int num=row; num > 0; num--){
            cout << num;
        }
        cout << endl;
    }
}

void pattern10(int numberOfElement){
    int num = 1;
    for(int row=0; row<numberOfElement; row++){
        for(int col=0; col<=row; col++){
            cout << num << " ";
            num++;
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

    // ---------- Pattern - 5: ----------
    cout << "Enter the Number of Element for Pattern-5:";
    cin >> numberOfElements;

    cout << "Printing Pattern-5:" << endl;
    pattern5(numberOfElements);
    
    // ---------- Pattern - 6: ----------
    cout << "Enter the Number of Element for Pattern-6:";
    cin >> numberOfElements;

    cout << "Printing Pattern-6:" << endl;
    pattern6(numberOfElements);
    
    // ---------- Pattern - 7: ----------
    cout << "Enter the Number of Element for Pattern-7:";
    cin >> numberOfElements;

    cout << "Printing Pattern-7:" << endl;
    pattern7(numberOfElements);
    
    // ---------- Pattern - 8: ----------
    cout << "Enter the Number of Element for Pattern-8:";
    cin >> numberOfElements;

    cout << "Printing Pattern-8:" << endl;
    pattern8(numberOfElements);
    
    // ---------- Pattern - 9: ----------
    cout << "Enter the Number of Element for Pattern-9:";
    cin >> numberOfElements;

    cout << "Printing Pattern-9:" << endl;
    pattern9(numberOfElements);
    
    // ---------- Pattern - 10: ----------
    cout << "Enter the Number of Element for Pattern-10:";
    cin >> numberOfElements;

    cout << "Printing Pattern-10:" << endl;
    pattern10(numberOfElements);

    return 0;
}