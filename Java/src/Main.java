
public class Main {

	private static void selectionSort(int []arr) {
		
		selectionSort(arr,0);
		
	}
	
private static void selectionSort(int []arr,int start) {
		
		if(start < arr.length-1) {
			
			int min_index=start;
			
			for(int i=start; i<arr.length; i++) {
				if(arr[i]<arr[min_index]) min_index=i;
			}
			swap(arr,start,min_index);
			selectionSort(arr,start+1);
		}
	}


	
private static void swap(int[] arr, int start, int min_index) {
	int tmp =arr[start];
	arr[start]=arr[min_index];
	arr[min_index]=tmp;
	
}

private static void printArray(int[] arr) {

	for(int data : arr) {
		System.out.print(data+" ");
		
	}
}



}
