#include <stdio.h>
#include <stdlib.h>
#include "mygraph.h"
#include "fields.h"
void readFile(Graph *graph){
    int id = 1;
    IS is = new_inputstruct("graph_weight.txt");
    if(is->f == NULL) return ;
    int n;
    fscanf(is->f,"%d",&n);
    get_line(is);
    for (int i = 0; i < n; ++i) {
        get_line(is);
        addVertex(graph,id++,is->fields[0]);
    }
    fscanf(is->f,"%d",&n);
    get_line(is);
    for (int j = 0; j < n; ++j) {
        get_line(is);
        int weight = atoi(is->fields[2]);
        addEdge(graph,atoi(is->fields[0]),atoi(is->fields[1]),&weight);
    }
    jettison_inputstruct(is);
}
int main(){
    int total;
    int arr[100];
    int money;
    Graph graph;
    createGraph(&graph);
    readFile(&graph);
    printGraph(&graph,1);
    total = dijkstra(&graph,2,7,NULL,&money,arr,0);
    if(total == -1) printf("Khong ton tai duong di\n");
    else {
        printf("Tong trong so tren duong di la : %d\n", money);
        printf("Duong di can tim la : ");
        printArr(&graph, arr, total);
    }
    int i = outDegree(&graph,1);
    outDegree(&graph,2);
    dropGraph(&graph);
    return 0;
}
