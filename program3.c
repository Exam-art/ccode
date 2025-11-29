#include<stdio.h> 
void main() 
{ 
	int buffer[10], bufsize, in, out, produce, consume, choice=0, count;
	count = 0, bufsize=5, in=0, out=0; 
	while(choice !=3)  { 
		printf("\n 1. Produce \t 2. Consume \t3. Exit"); 
		printf("\n Enter your choice: "); 
		scanf("%d",&choice);  
		switch(choice)  { 
			case 1: if(count == bufsize) 
					printf("\n Buffer is Full\n"); 
				else	{ 
					printf("\n Enter the value: "); 
					scanf("%d", &produce);  
					buffer[in] = produce; 
					in = (in+1)%bufsize;
					count++;
				} 
				break; 
			case 2: if(count==0) 
					printf("\n Buffer is Empty\n"); 
				else	{ 
					consume = buffer[out]; 
					printf("\n The consumed value is %d\n", consume);  
					out = (out+1)%bufsize; 
					count--;
				} 
				break; 
		} 
	}  
} 
