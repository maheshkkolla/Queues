#include "queue.h"
#include <stdio.h>
#include "expr_assert.h"

void test_createQueue_creates_the_queue_and_returns_the_queue() {
	Queue queue = createQueue();
	assertEqual((int)queue.head, 0);
	assertEqual((int)queue.tail, 0);	
}

void test_enQueue_inserts_the_element_into_the_queue(){
	Queue queue = createQueue();	
	int element = 4;
	enQueue(&queue,&element);
	assertEqual(*(int *)(queue.head->data), element);
}

void test_deQueue_deletes_the_item_in_the_queue_and_returns_that_deleted_item(){
	Queue queue = createQueue();	
	int element = 4;
	int *result;
	enQueue(&queue,&element);
	result = deQueue(&queue);
	assertEqual(result, &element);
}