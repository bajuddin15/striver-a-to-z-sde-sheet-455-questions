bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }
  return true;
}

// Link - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/