#include <iostream>
#include <limits>

using namespace std;

char matrix[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void Draw(){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Input(){
    int input;
    cout<<"Print the number of the field"<<endl;
    cin>>input;

    while(input<1||input>9){
        cin.clear();
        cin.ignore(numeric_limits<int>::max(),'\n');
        cout<<"Please input again"<<endl;
        cin>>input;
    }

    int row = input/3;
    int column = input%3-1;
    matrix[row][column] = 'X';
}

int main() {
    Draw();
    Input();
    Draw();
    return 0;
}