#include "stdio.h"
#include "graph.h"

/* ============================================================================
 * Related Questions
 * ============================================================================
 * For the purposes of this problem, suppose Quora has N questions, and
 * question i (1 ≤ i ≤ N) takes Ti time to read. There exists exactly one path
 * from any question to another, and related questions form undirected pairs
 * between themselves. In other words, the graph of related questions is a
 * tree.
 *
 * Each time Steve reads a question, he will see a list of related question
 * and navigate to one that he hasn't read yet at random. Steve will sto
 * reading once there are no unread related questions.
 *
 * Which question should we show first to Steve so that we minimize his total
 * expected reading time? It is guaranteed that there is one unique question
 * that is optimal.
 *
 * ============================================================================
 * Input Format
 * ============================================================================
 * Line 1: A single integer, N
 * Line 2: N integers, Ti
 * Line 3...N+1: Each line contains two integers A, B indicating that question
 *               A and B are related
 *
 * ============================================================================
 * Output Format
 * ============================================================================
 * Line 1: A single integer, X, the best question to show first
 *
 * ============================================================================
 * Constraints
 * ============================================================================
 * 1 ≤ N ≤ 10^5
 * 1 ≤ Ti ≤ 10^6
 *
 * ============================================================================
 * Sample Input
 * ============================================================================
 * 5
 * 2 2 1 2 2
 * 1 2
 * 2 3
 * 3 4
 * 4 5
 *
 * ============================================================================
 * Sample Output
 * ============================================================================
 * 3
 */

int main(int argc, char *argv[])
{
        long int N;
        scanf("%ld", &N);
        long int questions[N];
        for (long int i = 0; i < N; i++) scanf("%ld", &questions[i]);
        Graph g(N);
        for (long int i = 0; i < (N - 1); i++) {
                long int v1, v2;
                scanf("%ld %ld", &v1, &v2);
                g.add_edge(v1, v2);
        }

        return 0;
}
