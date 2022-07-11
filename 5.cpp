#include <iostream>

using namespace std;

 

    int main()
    {
        char arr1[] = {'I', 'J', 'K', 'L', 'M'};

        char arr2[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

        char arr3[13];

        for (int i=0; i< 5; i++) {
            if (arr1[i] < arr2[i]) {
                arr3[i*2] = arr1[i];
                arr3[i*2+1] = arr2[i];
            }
            else {
                arr3[i*2] = arr2[i];
                arr3[i*2+1] = arr1[i];
            }
        }

        for (int i=5; i< 8; i++) {
            arr3[i+5] = arr2[i];
        }

        for (int i=0; i< 13; i++) {
cout<< arr3[i] << ' ';
        }
cout<<endl;

        return 0;
}