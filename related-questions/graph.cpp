#include "graph.h"

Graph::Graph(long int vertex_count)
{
        this->vertex_count = vertex_count;
        adjacency_matrix = new bool *[vertex_count];
        for (long int i = 0; i < vertex_count; i++) {
                adjacency_matrix[i] = new bool [vertex_count];
                for (long int j = 0; j < vertex_count; j++)
                        adjacency_matrix[i][j] = false;
        }
}

Graph::~Graph()
{
        for (long int i = 0; i < vertex_count; i++)
                delete[] adjacency_matrix[i];
        delete[] adjacency_matrix;
}

void Graph::add_edge(long int i, long int j)
{
        if (i >= 0 && i < vertex_count && j > 0 && j < vertex_count) {
                adjacency_matrix[i][j] = true;
                adjacency_matrix[j][i] = true;
        }
}

void Graph::remove_edge(long int i, long int j)
{
        if (i >= 0 && i < vertex_count && j > 0 && j < vertex_count) {
                adjacency_matrix[i][j] = false;
                adjacency_matrix[j][i] = false;
        }
}

bool Graph::is_edge(long int i, long int j)
{
        if (i >= 0 && i < vertex_count && j > 0 && j < vertex_count)
                return adjacency_matrix[i][j];
        else
                return false;
}
