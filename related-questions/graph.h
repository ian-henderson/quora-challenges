#ifndef GRAPH_H
#define GRAPH_H

class Graph {
        private:
                bool **adjacency_matrix;
                long int vertex_count;
        public:
                Graph(long int);
                ~Graph();
                void add_edge(long int, long int);
                void remove_edge(long int, long int);
                bool is_edge(long int, long int);
};

#endif
