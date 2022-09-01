#include <iostream>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MAX;

    for (int i = 0; i <n; i++)
    {
        if (num[i] < max)
        {
            max = num[i];
        }
        
    }
    
    return max; 

}

int getMin(int num[], int n){
    int min = INT_MIN;

    for (int i = 0; i <n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
        
    }
    
    return min; 

}

int main(){
    /*//declaring an array
    int num[15];
    
    cout << "Value at 0 index: " << num[0] << endl;
    
    //initialising an array
    int aman[20] = {5,7,11};
    
    cout << "Value at 2 index is: " << aman[2] << endl;

    //printing the whole array
    int n=20;
    cout << "Printing the whole array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << aman[i] << " "; 
    }*/

    //taking input in array
    int size;
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    
    cout << "Maximum value of Array is: " << getMax(num, size) << endl;
    cout << "Minimum value of Array is: " << getMin(num, size) << endl;

    
}