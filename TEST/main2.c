#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fields.h"
#include "mygraph.h"
int n;
int readFile(char *nameFile, Graph *graph){
    int m;
    IS is = new_inputstruct(nameFile);
    get_line(is);
    n = atoi(is->fields[0]);
    m = atoi(is->fields[1]);
    for(int i = 0; i < n; i++){
        get_line(is);
        addVertex(graph,atoi(is->fields[1]),is->fields[0]);
    }
    for(int i = 0; i < m; i++) {
        get_line(is);
        addEdge(graph, atoi(is->fields[0]), atoi(is->fields[1]), NULL);
    }

    jettison_inputstruct(is);

}
char* searchIDtoName(Graph graph, int id){
    JRB p = jrb_find_int(graph.vertex,id);
    if( p != NULL){
        return jval_s(jrb_find_int(graph.vertex,id)->val);
    }else{
        return NULL;
    }

}
int searchNametoId(Graph graph,char *name){
    JRB p;
    jrb_traverse(p,graph.vertex){
        if(strcmp(name,jval_s(p->val)) == 0){
            return jval_i(p->key);
        }
    }
    return 0;
}
int searchTwoId(Graph graph, int id1, int id2, int *arr){
    int k = 0;
    int arr1[20];
    int arr2[20];
    int x = getConnected(&graph,id1,arr1);
    int y = getConnected(&graph,id2,arr2);
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(arr1[i] == arr2[j]){
                arr[k] = arr1[i];
                ++k;
            }
        }
    }
    return k;
}
//void sort(int *arr, int k){
//    for(int i = 0; i < k ; i++ ){
//        for(int j = i; j < k; j++){
//            if(arr[i] < arr[j]){
//                int h = arr[i];
//                arr[i] = arr[j];
//                arr[j] = h;
//            }
//        }
//    }
//}
//int searchTwoID2(Graph graph, int id1, int id2, int *arr){
//    int arr1[20];
//    int arr2[20];
//    int x = getConnected(&graph,id1,arr1);
//    int y = getConnected(&graph,id2,arr2);
//
//    for(int i = 0; i < x; i++){
//        if(arr1[i] != arr2[i]) return 0;
//    }
//}
int checkLienKet(Graph graph, int id1, int id2){
    int arr[20];
    int total = getConnected(&graph,id1,arr);
    for(int i = 0; i < total; i++){
        if(arr[i] == id2) return 1;
    }
    return 0;
}
int outputLienKetToVertex(Graph graph, int id, int *arr){
    JRB p;
    int k = 0;
    jrb_traverse(p,graph.edges){
        if(checkLienKet(graph,jval_i(p->key),id) == 1){
            arr[k] == jval_i(p->key);
            ++k;
        }
    }
    return k;
}
int search4(Graph graph, int id1, int id2, int *arr){
    int arr1[20];
    int arr2[20];
    int c = 0;
    int a = outputLienKetToVertex(graph,id1,arr1 );
    int b = outputLienKetToVertex(graph, id2, arr2);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(arr1[i] == arr2[j]) {
                arr[c] = arr1[i];
                ++c;
            }
        }
    }
    return c;
}
int search5(Graph graph, int k, int *arr){
    JRB p;
    int i = 0;
    int arr1[20];
    jrb_traverse(p, graph.edges){
        arr1[i] = inDegree(&graph,jval_i(p->key));
        ++i;
    }
    int m = 0;
    for(int j = 0; j < i; j++){
        if(arr1[j] > k){
            arr[m] = arr1[j];
            ++m;
        }
    }
    return m;
}
int main(int argc, char *argv[]){
    Graph graph;
    createGraph(&graph);
    readFile("g.txt", &graph);
    printGraph(&graph,0);
    if(argc == 2){
        if(strcmp(argv[1],"help") == 0){
            printf("Supported command: help, i2n, n2i, cc, cr, odg, rel.");
        }
        else if(strcmp(argv[1], "about") == 0){
            printf("C advanced 2014 final exam");
        }
    }
    char name[20];
    if(argc == 4){
        if(strcmp(argv[1],"i2n")){
          if(searchIDtoName(graph,atoi(argv[4]) != NULL)){
              printf("%s",searchIDtoName(graph,atoi(argv[4])));
          }else{
              printf("Khong tim thay!");
          }
        }
        if(strcmp(argv[1],"n2i")){
            if(searchNametoId(graph,argv[4]) != 0) {
                printf("%d",searchNametoId(graph,argv[4]) );
            }else{
                printf("Khong tim thay!");
            }
        }
        if(strcmp(argv[1],"cc")){
            int arr[20];
            int h = searchTwoId(graph,atoi(argv[3]),atoi(argv[4]),arr);
            if(h == 0){
                printf("Khong tim thay sach nao!");
            }else{
                for(int i = 0; i < h; i++){
                    printf("%s\n",getName(&graph,arr[i]));
                }
            }
        }
        if(strcmp(argv[1],"cr")){
            int mang[20];
            int r = search4(graph,atoi(argv[3]), atoi(argv[4]), mang);
            if(r == 0) printf("Khong tim thay!");
            else{
                for(int i = 0; i < r; i++){
                    printf("%s\n",getName(&graph,mang[i]));
                }
            }

        }
        if(strcmp(argv[1],"org")){
            int mang2[20];
            int m = search5(graph,atoi(argv[3]),mang2);
            for(int i = 0; i < m ;i++ ){
                printf("%s\n",getName(&graph,mang2[i]));
            }
        }

    }

    dropGraph(&graph);
}