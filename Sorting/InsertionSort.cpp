/* 
  Sorting in ascending order
  Time Complexity - O(n) 
*/
template <typename T>
void insertionSortAsc(T& arr, const unsigned int size) {
  for(int i = 0; i < size; i++){
    T cur = arr[i];
    int j = i-1;
    while((j >= 0) && (arr[j] > cur)) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = cur;    
  }
}

/* 
  Sorting in descending order
  Time Complexity - O(n) 
*/
template <typename T>
void insertionSortDes(T& arr, const unsigned int size) {
  for(int i = 0; i < size; i++){
    T cur = arr[i];
    int j = i-1;
    while((j >= 0) && (arr[j] < cur)){
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = cur;    
  }
}
