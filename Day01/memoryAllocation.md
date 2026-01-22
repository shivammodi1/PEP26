# When we create some variable in stack memory, the memory is automatically allocated and deallocated when the variable goes out of scope.
```cpp
int main() {
    int a = 10; // 'a' is allocated on the stack
    // do something with 'a'
    return 0; // 'a' is deallocated automatically when it goes out of scope
}
```

# However, when we create variables in heap memory using `new`, we need to manually manage the memory allocation and deallocation.
```cpp
int main() {
    int* p = new int; // 'p' is allocated on the heap
    *p = 20; // do something with the allocated memory
    delete p; // manually deallocate the memory to avoid memory leak
    return 0;
}
```
