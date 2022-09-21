#include <iostream>

using namespace std;

int main(){

    int matriz[3][3];

    matriz[0][0] = 0;
    matriz[0][1] = 1;
    matriz[0][2] = 2;

    matriz[1][0] = 10;
    matriz[1][1] = 11; 
    matriz[1][2] = 12;
    
    matriz[2][0] = 18;
    matriz[2][1] = 26;
    matriz[2][2] = 34;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i==j){
                cout << "Diagonal Principal: " << matriz[i][j] << "\t";
            }   
        }
        cout << endl;
        
    }
} 