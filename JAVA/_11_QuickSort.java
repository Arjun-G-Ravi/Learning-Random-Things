
public class _11_QuickSort {
    public static void main(String[] args) {
        // Add length adn input multiple strings
        String[] words = {"cherry", "apple", "blueberry", "banana"};
        quickSort(words, 0, words.length - 1);
        for(int i=0; i<words.length; i++){
            System.out.println(words[i]);
        }
    }

    public static void quickSort(String[] words, int start, int end) {
        if (start >= end) {
            return;
        }

        int pivotIndex = partition(words, start, end);
        quickSort(words, start, pivotIndex - 1);
        quickSort(words, pivotIndex + 1, end);
    }

    public static int partition(String[] words, int start, int end) {
        String pivot = words[end];
        int i = start;
        for (int j = start; j < end; j++) {
            if (words[j].compareTo(pivot) < 0) {
                swap(words, i, j);
                i++;
            }
        }
        swap(words, i, end);
        return i;
    }

    public static void swap(String[] words, int i, int j) {
        String temp = words[i];
        words[i] = words[j];
        words[j] = temp;
    }
}
