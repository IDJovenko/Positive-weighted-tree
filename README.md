This GitHub repository contains an implementation in C++ of a positively weighted tree. In this implementation, the nodes of the tree are defined as points on the plane, and the weight of the edges corresponds to the distance between the vertices.

The tree is represented using a map data structure, where each point in the plane is associated with a node. Each node has a parent, which is another point on the plane, and a map of children, where each child point is associated with a weight representing the distance between the parent and child.

The Tree class provides several methods to manipulate and query the tree. These methods include adding edges between vertices, inserting a new vertex into an existing edge, getting a list of all vertices in the tree, getting a list of all outgoing vertices for a given vertex, getting the incoming (parent) vertex for a given vertex, and getting the outgoing and incoming edges for a given vertex.

The class also includes methods to check if a vertex or an edge exists in the tree, as well as methods to get the weight of an edge between two vertices.

This implementation aims to provide a flexible and efficient way to work with positively weighted trees in C++, allowing users to easily manipulate and query the tree structure.
