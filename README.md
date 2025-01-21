# Positively Weighted Tree Implementation in C++

## Overview

This repository contains an implementation in C++ of a positively weighted tree. The nodes of the tree are defined as points on the plane, and the weight of the edges corresponds to the distance between the vertices.

## Data Structure

The tree is represented using a `map` data structure, where each point in the plane is associated with a node. Each node has:

- A **parent**, which is another point on the plane.
- A **map of children**, where each child point is associated with a weight representing the distance between the parent and child.

## Tree Class Methods

The `Tree` class provides several methods to manipulate and query the tree:

### Adding Edges

- `add_edge(pointA, pointB, weight)`  
  Adds an edge between two vertices.

### Inserting Vertices

- `insert_vertex(vertexA, newVertexC, vertexB, weightAC, weightBC)`  
  Inserts a new vertex into an existing edge.

### Querying Vertices

- `get_vertices()`  
  Gets a list of all vertices in the tree.

- `get_outgoing_vertices(vertex)`  
  Gets a list of all outgoing vertices for a given vertex.

- `get_incoming_vertex(vertex)`  
  Gets the incoming (parent) vertex for a given vertex.

### Edge Operations

- `get_outgoing_edges(vertex)`  
  Gets the outgoing edges for a given vertex.

- `get_incoming_edge(vertex)`  
  Gets the incoming edges for a given vertex.

### Checking Existence

- `has_vertex(vertex)`  
  Checks if a vertex exists in the tree.

- `has_edge(pointA, pointB)`  
  Checks if an edge exists between two vertices.

### Getting Weights

- `get_weight(pointA, pointB)`  
  Gets the weight of an edge between two vertices.

## Purpose

This implementation aims to provide a flexible and efficient way to work with positively weighted trees in C++, allowing users to easily manipulate and query the tree structure.