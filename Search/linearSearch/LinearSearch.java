import java.util.Random;
import java.util.stream.Stream;

/**
 * Linear search is the easiest search algorithm
 * It works with sorted and unsorted arrays (an binary search works only with sorted array)
 * This algorithm just compares all elements of an array to find a value
 * <p>
 * Worst-case performance	O(n)
 * Best-case performance	O(1)
 * Average performance	    O(n)
 * Worst-case space complexity
 */
class LinearSearch {
    /**
     * Linear Search method
     *
     * @param array Integer List to be searched
     * @param value Key being searched for
     * @return Location of the key
     */
    static int find(Integer[] array, Integer value) {
        for (int i = 0; i < array.length; i++) {
            if (array[i].compareTo(value) == 0) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        //generate data
        Random random = new Random();
        int size = 100;
        int maxElement = 50;
        Integer[] integers = Stream.generate(() -> random.nextInt(maxElement)).limit(size).toArray(Integer[]::new);

        //the element that should be found
        Integer searchValue = integers[random.nextInt(size - 1)];

        int atIndex = find(integers, searchValue);

        if (atIndex == -1) System.out.println("Element not found!");
        else System.out.println("Element found!");
        System.out.println(String.format(
                "Value to search : %d \n" +
                "Found at index  : %d \n" +
                "An array length : %d", searchValue, atIndex, size));
    }
}