#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data;
    struct node* next;
}node;

node* start = NULL;

void insert(int input) {
    node* newnode, * cur;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->data = input;
    cur = start;
    if (start == NULL) {
        start = newnode;
        return;
    }
    else if(start->data == newnode->data){
        printf("중복\n");
        exit();
    }
    
    else if (start->data > newnode->data) {
        newnode->next = start;
        start = newnode;
        return;
    }
    
    else
    {
        while (cur->next != NULL) {
            if (cur->next->data > newnode->data) {
                newnode->next = cur->next;
                cur->next = newnode;
                return;
            }
            else if(cur->next->data == newnode->data){
                printf("중복\n");
                exit();
            }
            cur = cur->next;
        }
    }
    cur->next = newnode;
}
void print() {
    node* cur;
    cur = start;
    while (cur->next != NULL) {
        printf("%d -> ", cur->data);
        cur = cur->next;
    }
    printf("%d \n", cur->data);
}

void insert(int input);
void print();

void main() {
    int num, input;
    while (1) {
        puts("1. 값 넣기");
        puts("2. 뽑기");
        puts("0. 종료");
        printf("숫자를 입력해라 : ");
        scanf("%d", &num);
        switch (num) {
        case 1:
            printf("어떤 값을 넣을껀가 : ");
            scanf("%d", &input);
            insert(input); 
            break;
        case 2:
            print(); break;
        case 0:
            return;
        }
    }
}
