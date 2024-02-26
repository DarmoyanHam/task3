#include <iostream>

int max_el(int* arr, int size)
{
    int max = arr[0];
    for(int i = 1; i < size; ++i)
    {
        max = max > arr[i] ? max : arr[i];
    }
    return max;
}

int min_el(int* arr, int size)
{
    int min = arr[0];
    for(int i = 1; i < size; ++i)
    {
        min = min < arr[i] ? min : arr[i];
    }
    return min;
}

int avg_el(int* arr, int size)
{
    int avg = 0;
    for(int i = 0; i < size; ++i)
    {
        avg += arr[i];
    }
    avg /= size;
    return avg;
}

int main()
{
    int const size = 7;
    int arr[size] = {1, 2, 4, 8, 10, 9, -6};

    std::cout << "1)" << max_el(arr, size) << std::endl;
    std::cout << "2)" << min_el(arr, size) << std::endl;
    std::cout << "3)" << avg_el(arr, size) << std::endl;

    return 0;
}