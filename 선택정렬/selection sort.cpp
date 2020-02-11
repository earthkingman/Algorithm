#include <stdio.h>

 

int main(void)

{
//선택정렬 
int i , j , min , index ,temp;

int array[10] ={ 1 , 10,5,8,7,6,4,3,2,9};
 
for(i=0;i<10;i++){
	min = 999; //배열에 가지고 있는 모든 원소보다 큰 값을 저장한다. 
	for (j =i ; j<10 ; j++){	 //10번 반복 
		if(min>array[j]){   //min보다 배열값이 작다면 교체하고 그 인덱스를 저장한다. 
			min = array[j];
			index = j;
		}
	}
	 
	//swap 부분  
		temp = array[i];   
		array[i]=array[index];
		array[index]=temp;
	
}

for(i=0;i<10;i++){
printf(" %d" , array[i]);
}
    return 0;

}
