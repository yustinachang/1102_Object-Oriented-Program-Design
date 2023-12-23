#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(double *, int);
void showArrayPtr(double *, int);
void showAverage(double, int);
int main(){
    double *scores, total = 0.0, average = 0.0;
    int scores_number;
    cout << "Please enter the number of test scores : ";
    while (cin >> scores_number, !scores_number){
        cout << "ERROR! Please input positive number : ";
    }
    scores = new double[scores_number];
    if (scores == NULL)
        return 0;
    cout << "Enter the test scores below.\n";
    for (int i = 0; i < scores_number; i++){
        cout << "Test score #" << (i + 1) << " : ";
        while (cin >> scores[i], !scores[i]){
            cout << "ERROR! Please input positive number : ";
        }
        total += scores[i];
    }
    selectionSort(scores, scores_number);
    cout << "The test scores in ascending order are : \n";
    showArrayPtr(scores, scores_number);
    showAverage(total, scores_number);
    delete[] scores;
    return 0;
}

void totalaverage(double *, int){}
void selectionSort(double *array, int size){
    int startScan, minIndex;
    double minElement;
    for (startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minElement = array[startScan];
        for (int index = startScan + 1; index < size; index++){
            if (array[index]  < minElement){
                minElement = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minElement;
    }
}
void showArrayPtr(double *array, int size){
    for (int i = 0; i< size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void showAverage(double total, int scores_number){
    double average;
    average = total / scores_number;
    cout << fixed << showpoint << setprecision(2);
    cout << "Average Score : " << average << endl;
}
