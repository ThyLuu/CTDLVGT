#include <iostream>
using namespace std;
// interchange sort - sap xep doi cho truc tiep
//Nguon : https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort
void InterchangeSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
}
