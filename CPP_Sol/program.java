import java.util.*;
class program{
    public static void main(String args[]){
       int arr[]=new int[] {4,2,1};
    //    for(int i=0;i<arr.length;i++){  //by using length of array
    //        System.out.println("array elements : "+arr[i]);
    //    }

    //System.out.println("array elements : "+Arrays.toString(arr));//by using length of array
    Arrays.sort(arr);
    System.out.println("array elements : "+Arrays.toString(arr));

    }
}