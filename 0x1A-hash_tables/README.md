# C - Hash Tables

In this C project, I implemented hash functions and hash tables.

## Table of Contents

- [Introduction](#introduction)
- [Files](#files)
- [Data Structures](#data-structures)
- [Function Prototypes](#function-prototypes)
- [Tasks](#tasks)

## Introduction

This project explores hash functions and hash tables in C. The implementation includes both basic hash tables and sorted hash tables.

## Files

- [`hash_tables.h`](./hash_tables.h): Header file containing definitions and prototypes for all types and functions.

## Data Structures

### Basic Hash Table

```c
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;


## Sorted Hash Table
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hash Table Functions</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            margin: 20px;
        }

        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 20px;
        }

        th, td {
            padding: 12px;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }

        th {
            background-color: #4CAF50;
            color: white;
        }

        tr:hover {
            background-color: #f5f5f5;
        }
    </style>
</head>
<body>

    <h1>Function Prototypes</h1>
<table>
    <thead>
        <tr>
            <th>File</th>
            <th>Prototype</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>hash_tables.h</td>
            <td><code>typedef struct hash_node_s {<br>&emsp;char *key;<br>&emsp;char *value;<br>&emsp;struct hash_node_s *next;<br>} hash_node_t;<br><br>typedef struct hash_table_s {<br>&emsp;unsigned long int size;<br>&emsp;hash_node_t **array;<br>} hash_table_t;<br><br>typedef struct shash_node_s {<br>&emsp;char *key;<br>&emsp;char *value;<br>&emsp;struct shash_node_s *next;<br>&emsp;struct shash_node_s *sprev;<br>&emsp;struct shash_node_s *snext;<br>} shash_node_t;<br><br>typedef struct shash_table_s {<br>&emsp;unsigned long int size;<br>&emsp;shash_node_t **array;<br>&emsp;shash_node_t *shead;<br>&emsp;shash_node_t *stail;<br>} shash_table_t;</code></td>
        </tr>
        <tr>
            <td>0-hash_table_create.c</td>
            <td><code>hash_table_t *hash_table_create(unsigned long int size);</code></td>
        </tr>
        <tr>
            <td>1-djb2.c</td>
            <td><code>unsigned long int hash_djb2(const unsigned char *str);</code></td>
        </tr>
        <tr>
            <td>2-key_index.c</td>
            <td><code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code></td>
        </tr>
        <tr>
            <td>3-hash_table_set.c</td>
            <td><code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code></td>
        </tr>
        <tr>
            <td>4-hash_table_get.c</td>
            <td><code>char *hash_table_get(const hash_table_t *ht, const char *key);</code></td>
        </tr>
        <tr>
            <td>5-hash_table_print.c</td>
            <td><code>void hash_table_print(const hash_table_t *ht);</code></td>
        </tr>
        <tr>
            <td>6-hash_table_delete.c</td>
            <td><code>void hash_table_delete(hash_table_t *ht);</code></td>
        </tr>
        <tr>
            <td>100-sorted_hash_table.c</td>
            <td><code>shash_table_t *shash_table_create(unsigned long int size);</code></td>
        </tr>
        <tr>
            <td></td>
            <td><code>int shash_table_set(shash_table_t *ht, const char *key, const char *value);</code></td>
        </tr>
        <tr>
            <td></td>
            <td><code>char *shash_table_get(const shash_table_t *ht, const char *key);</code></td>
        </tr>
        <tr>
            <td></td>
            <td><code>void shash_table_print(const shash_table_t *ht);</code></td>
        </tr>
        <tr>
            <td></td>
            <td><code>void shash_table_print_rev(const shash_table_t *ht);</code></td>
        </tr>
        <tr>
            <td></td>
            <td><code>void shash_table_delete(shash_table_t *ht);</code></td>
        </tr>
    </tbody>
</table>


</body>
</html>
