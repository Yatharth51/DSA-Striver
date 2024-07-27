#include <iostream>
using namespace std;
 
void pattern(int n){
    for (int row = 1 ; row<= n ; row++){
        char sh ='A';
        for (int col = 1 ; col<=2*row-1 ; col=col+1){
            if (col==1){
                cout<<sh;
            }
            else if (col<=row){
                sh++;
                cout<<sh;
                
            }
            else {
                sh--;
                cout<<sh;
            }
            
        }
        cout<<endl;
    }
}

void pattern2(int n){
    int col;
    for (int row = 1 ; row<= n ; row++){
        for (col =1 ; col<=row; col++){
            cout<<col;
            if (col==row)break;
        }
        col=col-1;
        for (;col>=1 ; col--){
            cout<<col;
        }
        cout<<endl;
    }
}


int main() {
 
    pattern2(5);
 
    return 0;
}