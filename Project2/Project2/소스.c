#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF 99999999

typedef struct {
	char data[100];
	struct Node* next;
}Node;

typedef struct {
	Node* top;
} Stack;

void push(Stack* stack, char* data){
	Node* node = (Node*)malloc(sizeof(Node));
	strcpy(node->data, data);
	node->next = stack->top;
	stack->top = node;
}
char* pop(Stack* stack) {
	if (stack->top == NULL) {
		printf("스택 언더플로우가 발생했습니다.\n");
		return -INF;
	}
	Node* node = stack->top;
	char* data = (char*)malloc(sizeof(char) * 100);
	strcpy(data, node->data);
	stack->top = node->next;
	free(node);
	return data;
}

int getPriority(char* i) {
	if (!strcmp(i, "(")) return 0;
	if (!strcmp(i, "+") || !strcmp(i, "-")) return 1;
	if (!strcmp(i, "*") || !strcmp(i, "/")) return 2;
	return 3;
	}

char* tarnsition(Stack* stack, char**, int size); {
	char res[1000] = "";
	for (int i = 0; i < size; i++) {
		if(!strcmp(s[i], "+"))
	}
}

