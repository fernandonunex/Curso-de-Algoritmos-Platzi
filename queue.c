/* Para crear una Queue debemos seguir los siguientes pasos:
	1. Crear un pointer para saber que hay en front y rear
	2. Colocar estos valores en -1 al inicializar
	3. Incrementar en 1 el valor de “rear” cuando agregamos un elemento
	4. Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front a usar dequeue.
	5. Antes de agregar un elemento revisar si hay espacios
	6. Antes de remover un elemento revisamos que existan elementos
	7. Asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1
 */

#include<stdio.h>
#define SIZE 5
int values[SIZE], front = -1, rear = -1;

void enQueue(int value){
	if(rear == SIZE - 1)
		printf("Our queue is full \n" );
	else
	{
		if (front == -1)
			front = 0;
		rear++;
		values[rear] = value;
		printf("Value %d successful added \n ", value);
	}
	
}

void deQueue(){
	if (front == -1)
		printf("Our queue is empty \n" );
	else
	{
		printf("The %d has been deleted successful \n", values[front]);
		front++;
		rear++;
		if (front == SIZE  )
		front = rear = -1;
		
	}
	
}


int main(int argc, char const *argv[])
{
	enQueue(10);
	enQueue(20);
	enQueue(30);
	enQueue(40);
	enQueue(50);
	enQueue(50);
	deQueue();
	deQueue();
	deQueue();
	enQueue(50);
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	enQueue(10);
	enQueue(20);
	enQueue(20);
	enQueue(30);
	enQueue(40);
	enQueue(20);
	enQueue(30);
	deQueue();
	enQueue(40);






	return 0;
}
