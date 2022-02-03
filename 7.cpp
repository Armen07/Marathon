#include <iostream>

void turn_matrix(int** matrix, int size){

    int** res = new int*[size];

    for(int i = 0; i < size; i++){
        res[i] = new int[size];
        for(int j = 0; j < size; j++){
            res[i][j] = matrix[j][size - 1 - i];
        }
    }

    for(int i = 0; i < size; i++){
        delete [] matrix[i];
        matrix[i] = res[i] ;
    }

    delete [] res;

}

int main(){
    int size;
    std::cout << "Enter the size of matrix" << std::endl;
    std::cin >> size;

    int** matrix = new int*[size];
        for(int i = 0; i < size; i++){
            
        matrix[i] = new int[size];

        }

    std::cout << "Enter elements of matrix" << std::endl;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                std::cin >> matrix[i][j];
            }
        }


        for(int i = 0; i < size; i++){
            std::cout << std::endl;
            for(int j = 0; j < size; j++){
                std::cout << matrix[i][j] << ' ';
            }
        }

        turn_matrix(matrix, size);

        std::cout << std::endl;

        for(int i = 0; i < size; i++){
            std::cout << std::endl;
            for(int j = 0; j < size; j++){
                std::cout << matrix[i][j] << ' ';
            }
        }

        for(int i = size - 1; i >= 0; i--){

            delete [] matrix[i];
        }
        
        delete [] matrix;

        return 0;
}