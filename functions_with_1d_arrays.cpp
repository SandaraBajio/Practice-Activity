#include <iostream>

using namespace std;

int findMax(int array[], int size)
{
    int max_value = array[0];

    for (int i=0; i < size; i++)
    {
        if (array [i] > max_value)
        {
            max_value = array[i];
        }
    }
    return max_value;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin>> array[i];
    }
    int max_value = findMax(array, size);
    cout << "Maximum element: " << max_value ;
    return 0;
}
