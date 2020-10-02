import java.util.Arrays;

class ExponentialSearch {

  // Java     program to find an element x in a sorted array using Exponential search.
  public static void main(String args[]) {
    int arr[] = {2, 5, 7, 10, 17, 29, 33, 39, 40, 52, 58, 61, 67, 83, 87};
    int x = 52;
    int result = exponentialSearch(arr, arr.length, x);

    System.out.println((result < 0) ?
        "Element is not present in array" :
        "Element is present at index " +
            result);
  }

  static int exponentialSearch(int arr[], int n, int x) {
    if (arr[0] == x)
      return 0;
    int j = 1;
    while (j < n && arr[j] <= x)
      j = j*2;
    return Arrays.binarySearch(arr, j/2,
        Math.min(j, n), x);
  }
}