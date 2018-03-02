#ifndef __ARVORE_BINARIA_DE_BUSCA__
#define __ARVORE_BINARIA_DE_BUSCA__ 1


typedef struct tNode{ int data;
                 struct tNode* left;
                 struct tNode* right;
                 bool red;
                 struct tNode* pai;
               } TreeNode;


/*
 ***********************************************
 A limpeza da árvore consiste em liberar a memória
 de todos os nós criados nos lados esquerdo e direito
 da árvore.
*/
void clearTree( TreeNode** r);

/*
 ***********************************************
 Método responsável por criar e retornar este
 novo nó com o valor recebido por parâmetro.
*/
TreeNode* createNode(int n, TreeNode* pai);

/*
 ***********************************************
 A inserção consistem em verificar se o nó já existe
 e inserir no lado esquerdo ou direito, de acordo
 com o valor n recebido por parâmetro. Se o valor n
 for menor que o valor do nó atual, então o valor
 deve ser inserido no lado esquerdo, caso contrário
 no direito.
*/
void insertNode(TreeNode** r, int n, TreeNode* pai);

/*
 ***********************************************
 A busca consiste em verificar em todos os nós da árvore
 se o valor encontrado existe. É necessário considerar
 que nos nós esquerdos sempre existirão valores menores
 que os direitos.
*/
TreeNode* findNode(TreeNode* r, int n);

/*
 ***********************************************
 Percurso em pré-ordem consiste em visitar
 primeiro a raiz da arvore/subarvore, e em seguida
 percorres a subarvore esquerda e a subarvore
 direita.
*/
void preOrderVisit( TreeNode* r);

/*
 ***********************************************
 Percurso em in-ordem consiste em primeiro percorrer
 a subarvore esquerda, em seguida visitar a raiz da
 arvore/subarvore e percorrer a subarvore direita.
*/
void inOrderVisit(TreeNode* r);

/*
 ***********************************************
 Percurso em pos-ordem consiste em primeiro percorrer
 a subarvore esquerda, em seguida percorrer a subarvore
 direita, e finalmente visitar a raiz da arvore/subarvore
*/
void posOrderVisit(TreeNode* r);

/*
 ***********************************************
 A remoção de um nó consiste em buscar o nó na árovre
 e reorganizar seus nós.
*/
bool removeNode(TreeNode** r, int n);

// ***********************************************

void peste(TreeNode** r);

#endif // __ARVORE_BINARIA_DE_BUSCA__
