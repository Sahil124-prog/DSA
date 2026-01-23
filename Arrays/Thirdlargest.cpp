#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[25] = {855, 450, 132, 359, 233, 825, 604, 481, 262, 337, 720, 525, 652, 300, 906, 219, 926, 906, 293, 864, 817, 498, 30, 639, 661};

    int largest = INT32_MIN;
    int secondlargest = INT32_MIN;
    int thirdlargest = INT32_MIN;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] > largest)
        {
            thirdlargest = secondlargest;
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] <= largest)
        {
            thirdlargest = secondlargest;
            secondlargest = arr[i];
        }

        else if (arr[i] > thirdlargest && arr[i] <= secondlargest)
        {
            thirdlargest = arr[i];
        }
    }

    cout << largest << " " << secondlargest << " " << thirdlargest;
}