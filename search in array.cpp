#include<stdio.h> 
// Function to find the element for deletion
// where array[] is the array from which element needs to be deleted
// size is the size of the array
// keyToFind is the element to be deleted from the array
int findElement(int array[], int size, int keyToBeSearched) 
{ 
int i; 
// Finding & returning the position of the element 
for (i = 0; i < size; i++) 
if (array[i] == keyToBeSearched) 
return i; 
return - 1; 
}  
// Main Function 
int main() 
{ 
int array[] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]); 
int keyToBeSearched = 67; 
// Calling the function to delete an element from the array
int pos = findElement(array, size, keyToBeSearched); 
if(pos==-1){
printf("n Element %d not found", keyToBeSearched);
}
else{
printf("n Position of %d: %d", keyToBeSearched ,pos+1);
}
return 0; 
}
