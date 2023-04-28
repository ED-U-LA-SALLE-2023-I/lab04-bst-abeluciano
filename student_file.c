#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Cell {
    int data;
    struct Cell* left;
    struct Cell* right;
};

struct Cell*root=NULL;

void insert_node(struct Cell **root, int data) {
    if(*root == NULL) {
        *root = malloc(sizeof(struct Cell));
        (*root) -> data = data;
        (*root) -> left = NULL;
        (*root) -> right = NULL;
    }

    else if (data < (*root) -> data) {
        insert_node(&((*root)->left), data);
    }
    else {
        insert_node(&((*root)->right), data);
    }
}

void postOrden_recorrido(struct Cell *root, char* nodes, int* index) {
    if(root != NULL) {
        postOrden_recorrido(root->left, nodes, index);
        postOrden_recorrido(root->right, nodes, index);
        sprintf(&nodes[*index], "%d", root->data);
        *index += strlen(&nodes[*index]);
    }
}

char* bst_fun(char* nodes){
    struct Cell *root = NULL;

    char*token = strtok(nodes, "  ");
    while (token != NULL) {
        int data = atoi(token);
        insert_node(&root, data);
        token = strtok(NULL, "  ");
    }

    char *result = malloc(sizeof(char) * strlen(nodes));
    int index=0;
    postOrden_recorrido(root, result, &index);

    return result;
}

int main() {
    char input[100];
    printf("Ingrese la lista de numeros separdo por espacio:\n ");
    fgets(input, 100, stdin);

    input[strlen(input)-1] = '\0';

    char *result = bst_fun(input);
    printf("El arbol en postorden es: %s\n", result);

    return 0;
}