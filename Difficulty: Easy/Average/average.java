class Solution {
    public static double posAverage(int[] arr) {
        int sum = 0;
        int count = 0;

        for(int i = 0; i < arr.length; i++){
            if(arr[i] >= 0){  // include 0
                sum += arr[i];
                count++;
            }
        }

        if(count == 0) return 0;

        return (double) sum / count;
    }
}