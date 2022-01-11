/*
 * Cho một đoạn văn các từ trong câu (được ngăn cách với nhau bởi các dấu , . ! .... ) được coi là liên quan với nhau.
 * 1.Thống kê các từ liên quan với nhau.
 * 2.Đứa ra các cặp từ liên quan với nhau.( theo thứ tự từ cao tới thấp)
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mygraph.h"
#include "queue.h"

int readFile(Graph *graph){
    FILE *f = fopen("file.txt","r");
    if(f == NULL){
        printf("Lỗi mở file!");
        return 0;
    }
    int c;
    int id = 1;
    int cau = 1;
    char string[100];
    int index;
    while(!feof(f)){
        while((!feof(f)) && (((c = fgetc(f)) == (int)' ') || iscntrl(c)));
        index = 0;
        while((!feof(f)) && isalnum(c)){
            string[index++] = (char)c;
            c = fgetc(f);
        }
        string[index] = 0;
        if(strlen(string) != 0 && getID(graph,string) == -1) addVertex(graph,id++,string);
        if(strlen(string) != 0) addEdge(graph,getID(graph,string),cau,NULL);
        if(ispunct(c)) ++cau;
    }
    fclose(f);
    return 1;
}
void ghepCap(Graph graph){
    Queue queue;
    createQueue(&queue);
    int t = 0;
    int id1[1000];
    int id2[1000];
    int connect1[30];
    int connect2[30];
    int total1;
    int total2;
    int index = 0;
    for (int j = 1; j < getVertexCount(&graph); ++j)
        for (int i = j+1; i < getVertexCount(&graph); ++i) {
            t = 0;
            total1 = getConnected(&graph, j, connect1);
            total2 = getConnected(&graph, i, connect2);
            for (int k = 0; k < ((total1 > total2) ? total2 : total1) ; ++k)
                if (connect1[k] == connect2[k])
                    ++t;
                else break;
            if(t != 0){
                id1[index] = j;
                id2[index] = i;
                inQueue(&queue,index++,t,1);
            }
       }
    printf("\tDanh sach cac cap tu xuat hien cung nhau theo thu tu giam dan : \n");
    for (Data_q  *s = queue.pHead; s != NULL;s = s->pNext)
        printf("\t%-15s - %-15s : %d\n",getName(&graph,id1[s->id]),getName(&graph,id2[s->id]),s->weight);
    freeQueue(&queue);
}
int main(int argc,char *argv[]){
    Graph graph;
    createGraph(&graph);
    if(!readFile(&graph)) return -1;
    printGraph(&graph,0);
    ghepCap(graph);
    dropGraph(&graph);
    return 0;
}
