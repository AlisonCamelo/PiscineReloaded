*This project has been created as part of the 42 curriculum by ALisonCamelo.*

# Piscine Reloaded 🏊‍♂️

## 📌 Description
**Piscine Reloaded** is a refresher module designed to consolidate the fundamental concepts of C programming, Unix shell tools, dynamic memory logic, function pointers, and automated build scripts learned during the 42 Piscine.

This repository structured from `ex00` to `ex27` serves as a solid foundation for low-level systems programming and C mastery.

---

## 🛠️ Topics Covered & Structure

### 🐚 Shell & System Administration (`ex00` - `ex05`)
- **Unix Commands & File Permissions:** Archiving (`tar`), file visibility, clean-up scripts.
- **Shell Scripting:** Extracting MAC addresses (`MAC.sh`), finding `.sh` files dynamically (`find_sh.sh`), and understanding wildcard patterns.

### 📐 C Fundamentals & Logic (`ex06` - `ex17`)
- **Basic Outputs:** Character and number printing (`ft_print_alphabet`, `ft_print_numbers`, `ft_is_negative`).
- **Pointers & Memory Manipulation:** Value swapping (`ft_swap`), division/modulus control (`ft_div_mod`), and basic string handling (`ft_strlen`, `ft_strcmp`).
- **Math & Recursion:** Iterative and recursive algorithms (`ft_iterative_factorial`, `ft_recursive_factorial`, `ft_sqrt`).

### 📋 Arrays, Arguments & Memory (`ex18` - `ex23`)
- **CLI Arguments:** Displaying and sorting command-line arguments (`ft_print_params`, `ft_sort_params`).
- **Dynamic Allocation:** Recreating heap memory allocations (`ft_strdup`, `ft_range`).
- **Headers & Structures:** Custom macro headers (`ft_abs.h`) and structure definitions (`ft_point.h`).

### ⚙️ Build Automation & Function Pointers (`ex24` - `ex27`)
- **Makefiles:** Creating automated compilation pipelines with standard targets (`all`, `clean`, `fclean`, `re`).
- **Function Pointers:** Passing functions as parameters to iterate and evaluate collections (`ft_foreach`, `ft_count_if`).
- **File I/O Display:** Low-level system calls (`open`, `read`, `write`, `close`) to read and render files directly to standard output.

---

## 🚀 Compilation & Usage

To compile exercises requiring Makefiles (such as `ex24` or `ex27`):

```bash
cd ex24
make
