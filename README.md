# std::vector<bool> Gotcha in C++

This repository demonstrates a common, yet often overlooked, issue with `std::vector<bool>` in C++.  While seemingly a standard vector, it's specialized and can lead to unexpected behavior due to its space optimization.  It doesn't store booleans directly but uses bit manipulation, impacting performance and interface consistency compared to other vectors.

## The Problem

`std::vector<bool>` is specialized to save space. Instead of storing each boolean as a full byte, it packs them together. This specialization modifies certain behaviors, such as:

* **Lack of direct element access:** You can't directly use `[]` operator to get a reference. Instead, you get a proxy object.
* **Non-standard iterator behavior:** Iterators might not behave as expected.
* **Potentially slower access compared to `std::vector<char>`:** While optimized for space, access time may be slower.

This can cause subtle bugs and performance issues when expecting standard vector semantics.

## How to reproduce

Execute the code in `bug.cpp`.  You'll see unexpected behavior when accessing elements directly using the `[]` operator compared to `std::vector<char>`.

## Solution

To avoid these issues, prefer alternatives like `std::vector<char>` (using single bits) or `std::vector<int>` (better for space when needed).

See `bugSolution.cpp` for a corrected implementation using a `std::vector<char>`, which provides expected vector behavior and better performance.
