#pragma once

#include <map>
#include <vector>
#include <tuple>
#include <initializer_list>

#define point std::pair<long,long>
#define EmptyParent point({ -1, -1 })

/**
 * Connected positive-weighted graph without cycles (i.e. positive-weighted tree).
**/
class Tree {

    struct node {
        node() : parent({ EmptyParent, 0 }), children() {}
        node(std::pair<point, double> parent, std::map<point, double> children) :
            parent(parent), children(children) {}
        std::pair<point, double> parent;
        std::map<point, double> children;
    };
    std::map<point, node> vertices;
    
public:
    Tree() {};
    Tree(std::initializer_list<std::tuple<point, point, double>> edges);

    /// Add vertices (if necessary) and an edge between them to the tree.
    void add_edge(point start_vertex, point end_vertex, double weight = 1.0);

    /// Delete start->end edge and add start->inserted and inserted->end edges to the tree.
    void insert_vertex(
        point start_vertex, point inserted_vertex, point end_vertex,
        double weight_1 = 1.0, double weight_2 = 1.0);

    /// Return all vertices of the tree.
    std::vector<point> get_vertices() const;

    /// Return all outgoing vertices for the specified vertex.
    std::vector<point> get_outgoing_vertices(point src_vertex) const;

    /// Return incoming (parent) vertex for the specified vertex.
    point get_incoming_vertex(point src_vertex) const;

    /// Get adjacent edges for the vertex as vector of (end vertex, edge weight).
    std::vector<std::pair<point, double>> get_outgoing_edges(point src_vertex) const;

    /// Get incoming (parent) edge for the vertex as pair (end vertex, edge weight).
    std::pair<point, double> get_incoming_edge(point src_vertex) const;

    /// Return true if the vertex exists in the graph, false otherwise.
    bool has_vertex(point vertex) const;

    /// Return true if vertices exist and have an edge between them, false otherwise.
    bool has_edge(point start_vertex, point end_vertex) const;

    /// return true if the tree has any edges.
    bool has_edge() const;

    /// Return weight of an edge between vertices (if there is any), throw an exception otherwise.
    double edge_weight(point start_vertex, point end_vertex) const;

    // TODO: Recursive removes the vertex and tree below it.
    //void remove_branch(point vertex);

private:
    /// Add single vertex to the tree.
    void add_vertex(point vertex);

    /// Remove the edge from the tree (but not the vertices).
    void remove_edge(point start_vertex, point end_vertex);

    /// Remove the vertex and all its adjacent edges from the tree.
    void remove_vertex(point vertex);
};
