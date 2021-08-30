#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
};
struct node* front = NULL;
struct node* rear = NULL;
void enqueue(int num) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->link = NULL;
	if (front == NULL && rear == NULL) {
		front = rear = temp;
		printf("First element added successfully!\n");
		return;
	}
	rear->link = temp;
	rear = temp;
	printf("Element enqueued successfully!\n");
}

void dequeue() {
	struct node* temp = front;
	if (front == NULL) {
		printf("Error!, The queue is empty ");
		return;
	}
	if (front = rear) {
		front = rear = NULL;
	}
	else
	{
		front = front->link;
	}
	free(temp);
	printf("dequeued successfully!\n");
}
int main() {
	
	enqueue(2);
	dequeue();
	dequeue();
}