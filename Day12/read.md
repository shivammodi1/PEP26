# Heap Data Structure Notes

## What is a Heap?

Heap is a **Complete Binary Tree** that follows a specific property.

### Types of Heap

1. **Max Heap**

   * Parent node ≥ Children

2. **Min Heap**

   * Parent node ≤ Children

---

## Complete Binary Tree

* All levels are completely filled except the last level.
* Last level nodes are as left as possible.

---

## Important Points

* Heap is **not** a Binary Search Tree.
* Heap is **not** a sorted data structure.

---

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Insertion | O(log n)   |
| Deletion  | O(log n)   |
| Search    | O(n)       |

---

## Array Representation of Heap (0-based Indexing)

For a node at index `i`:

* Left Child → `2*i + 1`
* Right Child → `2*i + 2`
* Parent → `(i - 1) / 2`

---

## Example: Max Heap Insertion Dry Run

Given array:
`arr = [10, 20, 5, 30]`

### Step 1: Insert 10

```
[10]
```

### Step 2: Insert 20

Compare with parent → swap

```
[20, 10]
```

### Step 3: Insert 5

No swap required

```
[20, 10, 5]
```

### Step 4: Insert 30

Initial:

```
[20, 10, 5, 30]
```

Compare 30 with parent (10) → swap

```
[20, 30, 5, 10]
```

Compare 30 with parent (20) → swap

```
[30, 20, 5, 10]
```

---

## Final Max Heap

```
      30
     /  \
   20    5
  /
10
```

Array Representation:

```
[30, 20, 5, 10]
```

---

## Key Concept: Heapify Up (Bubble Up)

Steps:

1. Insert element at the end.
2. Compare with parent.
3. If greater → swap.
4. Repeat until heap property satisfied.

Time Complexity:

```
O(log n)
```
