# push_swap - 1337 Project  

[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)  

## 📜 Project Overview  

**push_swap** is a sorting algorithm project from **1337** (part of the **42 Network**). The objective is to sort a stack of integers using only a limited set of stack operations, ensuring efficiency with the least number of moves.  

---

## 🚀 Features  

- Implements sorting using two stacks (`stack A` and `stack B`).  
- Uses only a limited set of allowed operations.  
- Optimized sorting strategies based on the number of elements.  
- Handles errors such as duplicate numbers and non-numeric input.  

---

## 📂 Repository Structure  

```plaintext  
📦 push_swap
├── 📂 bonus
│   ├── 📂 gnl_bonus
│   │   ├── get_next_line_bonus.c
│   │   ├── get_next_line_bonus.h
│   │   ├── get_next_line_utils_bonus.c
│   ├── 📂 lists_bonus
│   │   ├── ft_lstadd_back_bonus.c
│   │   ├── ft_lstbefore_last_bonus.c
│   │   ├── ft_lstclear_bonus.c
│   │   ├── ft_lstlast_bonus.c
│   │   ├── ft_lstnew_bonus.c
│   │   ├── ft_lstsize_bonus.c
│   ├── 📂 operations_bonus
│   │   ├── push_bonus.c
│   │   ├── reverse_rotate_bonus.c
│   │   ├── rotate_bonus.c
│   │   ├── swap_bonus.c
│   ├── 📂 utils_bonus
│   │   ├── ft_atoi_bonus.c
│   │   ├── ft_putstr_fd_bonus.c
│   │   ├── ft_split_bonus.c
│   │   ├── ft_strcmp_bonus.c
│   ├── checker_bonus.c
│   ├── checker_bonus.h
│   ├── checker_utils_bonus.c
│   ├── parsing_bonus.c
│   ├── status_exit_bonus.c
├── 📂 mandatory
│   │
│   ├── 📂 lists
│   │   ├── ft_lstadd_back.c
│   │   ├── ft_lstbefore_last.c
│   │   ├── ft_lstclear.c
│   │   ├── ft_lstlast.c
│   │   ├── ft_lstnew.c
│   │   ├── ft_lstsize.c
│   ├── 📂 operations
│   │   ├── push.c
│   │   ├── reverse_rotate.c
│   │   ├── rotate.c
│   │   ├── swap.c
│   ├── 📂 utils
│   │   ├── ft_atoi.c
│   │   ├── ft_putstr_fd.c
│   │   ├── ft_split.c
│   │   ├── ft_strlen.c
│   ├── sorting_alg.c
│   ├── parsing.c
│   ├── push_swap_utils.c
│   ├── push_swap.c
│   ├── push_swap.h
│   ├── range_sort.c
└── Makefile
```  

---

## 🛠️ How to Compile  

### Without Bonus  
```bash  
make  
```  
This will generate the `push_swap` executable.  

### With Bonus (Checker Program)  
```bash  
make bonus  
```  
This will generate the `checker` executable.  

To clean up object files:  
```bash  
make clean  
```  

To remove both executables and object files:  
```bash  
make fclean  
```  

To recompile everything:  
```bash  
make re  
```  

---

## 📖 Allowed Operations  

| Command  | Description |  
|----------|------------|  
| `sa`  | Swap the first two elements of **stack A** |  
| `sb`  | Swap the first two elements of **stack B** |  
| `ss`  | Swap the first two elements of both stacks |  
| `pa`  | Push the top element from **stack B** to **stack A** |  
| `pb`  | Push the top element from **stack A** to **stack B** |  
| `ra`  | Rotate **stack A** (shift up all elements) |  
| `rb`  | Rotate **stack B** (shift up all elements) |  
| `rr`  | Rotate both stacks |  
| `rra` | Reverse rotate **stack A** (shift down all elements) |  
| `rrb` | Reverse rotate **stack B** (shift down all elements) |  
| `rrr` | Reverse rotate both stacks |  

---

## 📖 Usage Examples  

### **Sorting with push_swap**  

```bash  
./push_swap 4 2 3 1 5  
```  
Output:  
```plaintext  
pb  
pb  
sa  
pa  
pa  
```  

### **Checking a sequence with the bonus checker**  

```bash  
ARG="4 2 3 1 5"; ./push_swap $ARG | ./checker $ARG  
```  
If sorted correctly:  
```plaintext  
OK  
```  
If not sorted:  
```plaintext  
KO  
```  

---

## 📋 Sorting Strategy  

- **3 Numbers:** Uses minimal swaps and rotations.  
- **5 Numbers:** Uses `pb` to move two smallest elements and sorts the remaining stack.  
- **100+ Numbers:** Implements **range-based logic** for efficient sorting as described in [this article](https://medium.com/@abdelhadi-salah/push-swap-42-e0abfe0e0fef)..  

---

## 🛡️ Error Handling  

- Rejects **non-numeric** arguments.  
- Rejects **duplicate numbers**.  
- Rejects **out-of-range** integers (greater than `INT_MAX` or less than `INT_MIN`).
- Rejects **empty input argument**.

---

## 🌟 Achievements  

- Mastered **stack operations** and **sorting algorithms**.  
- Implemented **efficient sorting** using **range-based logic**.  
- Gained deeper understanding of **time complexity** and **optimization techniques**.  

---

## 🛡️ License  

This project is part of the **1337 curriculum**. It is shared here for educational purposes and should not be used for plagiarism.
