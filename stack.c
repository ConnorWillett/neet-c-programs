#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next_ptr;
};

// Global pointer for stack and queue
struct node *stack_head_ptr = NULL;
struct node *queue_head_ptr = NULL;

// Function to push a value onto the stack
void push(int value) {
    struct node *new_ptr = (struct node *)malloc(sizeof(struct node));
    if (new_ptr != NULL) {
        new_ptr->data = value;
        new_ptr->next_ptr = stack_head_ptr;
        stack_head_ptr = new_ptr;
    }
}

// Function to pop a value from the stack
int pop() {
    if (stack_head_ptr != NULL) {
        int value = stack_head_ptr->data;
        struct node *node_ptr = stack_head_ptr;
        stack_head_ptr = stack_head_ptr->next_ptr;
        free(node_ptr);
        return value;
    }
    return -1; // Indicate that the stack is empty
}

// Function to enqueue a value in the queue
void enqueue(int value) {
    struct node *new_ptr = (struct node *)malloc(sizeof(struct node));
    if (new_ptr != NULL) {
        new_ptr->data = value;
        new_ptr->next_ptr = NULL;
        
        if (queue_head_ptr == NULL) {
            queue_head_ptr = new_ptr;
        } else {
            struct node *node_ptr = queue_head_ptr;
            while (node_ptr->next_ptr != NULL) {
                node_ptr = node_ptr->next_ptr;
            }
            node_ptr->next_ptr = new_ptr;
        }
    }
}

// Function to print the contents of the stack
void print_stack() {
    struct node *current = stack_head_ptr;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next_ptr;
    }
    printf("NULL\n");
}

// Function to print the contents of the queue
void print_queue() {
    struct node *current = queue_head_ptr;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next_ptr;
    }
    printf("NULL\n");
}

// Main function for testing
int main(void) {
    push(10);
    push(20);
    push(30);
    
    printf("Stack after pushes: ");
    print_stack();
    
    printf("Popped value: %d\n", pop());
    printf("Stack after pop: ");
    print_stack();

    enqueue(40);
    enqueue(50);
    enqueue(60);
    
    printf("Queue after enqueues: ");
    print_queue();

    return 0;
}
