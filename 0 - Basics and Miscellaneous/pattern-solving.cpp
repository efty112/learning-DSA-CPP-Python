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

void pattern11(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        for(char col='A'; col<='A' + row; col++){
            cout << col;
        }
        cout << "\n";
    }
}

void pattern12(int numberOfElement){
    for(int row=0; row<numberOfElement; row++){
        // Space
        for (int space=0; space<numberOfElement-row-1; space++){
            cout << " ";
        }

        // Character
        char ch = 'A';
        int breakpoint = (2*row+1)/2;

        for (int star=1; star<=2*row+1; star++){
            cout << ch;
            if(star <= breakpoint) ch++;
            else ch--;
        }

        // Space
        for (int space=0; space<numberOfElement-row-1; space++){
            cout << " ";
        }
        cout << "\n";
    }
}

void pattern13(int numberOfElement){
    int spaces = 0;

    for (int row=0; row<numberOfElement; row++){
        // Star
        for (int star=1; star<=numberOfElement-row; star++){
            cout << "*";
        }
        
        // Space
        for (int space=0; space<spaces; space++){
            cout << " ";
        }
     
        // Star
        for (int star=1; star<=numberOfElement-row; star++){
            cout << "*";
        }
        
        spaces += 2;
        cout << endl;
    }

    int spaces2 = 2*numberOfElement - 2;

    for (int row=1; row<=numberOfElement; row++){
        // Star
        for (int star=1; star<=row; star++){
            cout << "*";
        }
        
        // Space
        for (int space=0; space<spaces2; space++){
            cout << " ";
        }
        
        // Star
        for (int star=1; star<=row; star++){
            cout << "*";
        }
        spaces2 -= 2;
        cout << endl;
    }

}
int main(){
    int numberOfElements;

    // ---------- Pattern - 13: ----------
    cout << "Enter the Number of Element for Pattern-13:";
    cin >> numberOfElements;

    cout << "Printing Pattern-13:" << endl;
    pattern13(numberOfElements);

    return 0;
}