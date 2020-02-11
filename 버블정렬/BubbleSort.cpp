//버블 정렬 (오름차순) 

#include <stdio.h>


 
 int main(void){
 
 int i , j  ,temp;

int array[10] ={ 1 , 10,5,8,7,6,4,3,2,9};
 
 for (i =0; i<10 ; i++)
{
	
	for(j=0; j<9-i ; j++){ //오름차순이기에 한 루프를 돌때마다 마지막에는 가장 큰값이 무조건 들어가니 j<9-i 까지만 루프를 돌린다 
	
	
	
		if(array[j] > array[j+1]){  //왼쪽이 오른쪽보다 클 경우 
		
		temp = array[j];
		array[j]=array[j+1];
		array[j+1] = temp;
			
		}
	
	}

} 

for(i=0;i<10;i++){
printf(" %d" , array[i]);
}
return 0;
 
 } 
 
 
 
