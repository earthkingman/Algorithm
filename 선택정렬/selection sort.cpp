#include <stdio.h>

 

int main(void)

{
//�������� 
int i , j , min , index ,temp;

int array[10] ={ 1 , 10,5,8,7,6,4,3,2,9};
 
for(i=0;i<10;i++){
	min = 999; //�迭�� ������ �ִ� ��� ���Һ��� ū ���� �����Ѵ�. 
	for (j =i ; j<10 ; j++){	 //10�� �ݺ� 
		if(min>array[j]){   //min���� �迭���� �۴ٸ� ��ü�ϰ� �� �ε����� �����Ѵ�. 
			min = array[j];
			index = j;
		}
	}
	 
	//swap �κ�  
		temp = array[i];   
		array[i]=array[index];
		array[index]=temp;
	
}

for(i=0;i<10;i++){
printf(" %d" , array[i]);
}
    return 0;

}
