#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int * arr, int size);
int search(int * arr, int size, int toSearch);



int main()
{
    int array[MAX_SIZE];
    int size, toSearch, searchIndex;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    inputArray(array, size);

    printf("Enter element to search: ");
    scanf("%d", &toSearch);

    searchIndex = search(array, size, toSearch);


    // Print search results
    if(searchIndex == -1)
        printf("%d does not exists in array.", toSearch);
    else
        printf("%d is found at %d position.", toSearch, searchIndex + 1);


    return 0;
}




/**
 * Function to input elements in array.
 *
 * @arr     Pointer to integer array
 * @size    Size of the array
 */
void inputArray(int * arr, int size)
{
    // Pointer to last array element arr[0]
    int * arrEnd = (arr + size - 1);


    // Run loop till last array element
    while(arr <= arrEnd)
    {
        scanf("%d", arr++);
    }
}

int search(int * arr, int size, int toSearch)
{
    int index = 0;

    // Pointer to last array element arr[size - 1]
    int * arrEnd = (arr + size - 1);

    /*
     * Run a loop from start of array to last array element (arr <= arrEnd), 
     * until current array element does not match element to search.
     */
    while(arr <= arrEnd && *arr != toSearch) {
        arr++;
        index++;
    }


    // If element is found
    if(arr <= arrEnd)
        return index;
    
    return -1;
}
