#include<stdio.h>

struct Cell {
    int value;
    struct Cell* left;
    struct Cell* right;
};

void insert_data(int data) {
    struct node *tempNode = (struct node*) malloc(sizeof(struct node));
    struct node *actual;
    struct node *padre;

    tempNode->value = data;
    tempNode->left = NULL;
    tempNode->right = NULL;

    if(root == NULL) {

        root = tempNode;
        actual = root; //root o tempNode
        padre = root; //root o tempNode

    } else { 



    }

}

char* bst_fun(char* nodes){

 }

int main() {
    int i, n;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);
    int N[n];

    printf("Ingrese los numeros : \n");
    for(i=0; i<n;i++){
        scanf("%d", &N[i]);
    }

    for(i=0;i<n;i++) {
        insert_data(N[i]);
    }


    return 0;
}