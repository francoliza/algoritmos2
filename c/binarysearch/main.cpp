#include <iostream>
#include <vector>

void printVector(std::vector<int> vec) {

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl;

}

void bubbleSort(std::vector<int>& vec) {
    int tmp;

    for (int i = 0; i < vec.size() - 1; i++) {
        for (int j = 0; j < vec.size() - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                tmp = vec[j + 1];
                vec[j + 1] = vec[j];
                vec[j] = tmp;
            }
        }
    }
}


bool binarySearch(std::vector<int> vec, int elem, int i, int j) {

    // Pre: el arreglo debe estar ordenado`
    int middle = (i + j) / 2;

    std::cout << "current middle: " << middle << std::endl;

    if (elem == vec[middle]) {
        std::cout << "Elemento a buscar: " << elem << std::endl;
        std::cout << "vec[i]: " << vec[middle] << std::endl;
        return true;
    } else if (vec[middle] > elem) { 
        // vamos pa la izquierdaj
        binarySearch(vec, elem, i, middle - 1);
    } else {
        // vamos pa la derecha
        binarySearch(vec, elem, middle, j);
    }

    return false;
}


int main() {

    std::vector<int> vec = {1, 5, 6, 2, 8, 9, 32, 67, 732};

    std::cout << "vector antes de ordenarlo: " << std::endl;
    printVector(vec);

    bubbleSort(vec);
    std::cout << "vector ordenado: " << std::endl;
    printVector(vec);

    binarySearch(vec, 5, 0, vec.size());

    return 0;
}