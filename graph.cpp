#include"graph.h"
#include<iostream>

/*void createGraph_1301213106(Graph &G){
    first(G) = NULL;
}*/

adrNode newNode_1301213106(char x){
    adrNode P = new Node;
    info(P) = x;
    child(P) = NULL;
    next(P) = NULL;

    return P;
}
void addNode_1301213106(adrNode &G, adrNode P){
    if(G == NULL){
        P = G;
    }

    else
    {
        adrNode Q = G;
        while (next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
}
adrNode findNode_1301213106(adrNode G, char x){
    adrNode Q = G;
    if(G != NULL)
    {
        while (Q != NULL)
        {
            if (info(Q) == x)
            {
                return Q;
            }
            Q = next(Q);
        }
    }else
    {
        return NULL;
    }

}

void addEdge_1301213106(adrNode &G, char x, char y){
    adrNode Q = findNode_1301213106(G, x);

    adrEdge P = new Edge;
    infoEdge(P) = y;
    nextEdge(P) = NULL;

    if(first(G) != NULL)
    {
        if(Q != NULL)
        {
            if(child(Q) == NULL)
            {
                child(Q) = P;
            }
            else{
                adrEdge E = child(Q);
                while (nextEdge(E) != NULL){
                    E = nextEdge(E);
                }
                nextEdge(E) = P;
            }
        }
        else{
            cout << "Data Parent Tidak Ditemukan" << endl;
        }

    } else{
        cout << "Graph Kosong" << endl;
    }

}
bool isConnected_1301213106(adrNode G, char x, char y){
    if(findNode_1301213106(G, x) == NULL){
        return false;
    }else{
        adrEdge k = child(findNode_1301213106(G, x));
        while(k != NULL){
            if(infoEdge(k) == y){
                return true;
            }
            k = nextEdge(k);
        }
        return false;
    }

}
void printGraph_1301213106(adrNode G){
    cout << "==================================================" << endl;
    G = next(G);

    while (G != NULL){
        cout << "Node " << info(G) << " :";
        if(child(G) != NULL){
            adrEdge(Q) = child(G);
            while(Q != NULL){
                cout << " - " << infoEdge(Q);
                Q = nextEdge(Q);
            }
        }
        cout << endl;
        G = next(G);
    }
    cout << "==================================================" << endl;
}
