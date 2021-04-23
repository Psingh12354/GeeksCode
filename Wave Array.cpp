class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int *arr, int n){
        int i=0;
        while(i<n-1){
             swap(arr[i], arr[i+1]); 
             i+=2;
        }
    }
};
