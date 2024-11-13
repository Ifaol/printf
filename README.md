# 0x011 .C Printf- Custom Printf Project

## Project Overview

The purpose of this project is to deepen the understanding of teamwork, collaboration, and programming fundamentals by building a custom version of the `printf` function in C. By demystifying how `printf` operates under the hood, this project offers a hands-on experience in handling various conversion specifiers, flags, and custom formatting options.

## Tasks

Below are the tasks for this project. Completed tasks link to their respective files.

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to format:
- `c`: Converts input into a character.
- `s`: Converts input into a string.

### 1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:
- `d`: Converts input into a base 10 integer.
- `i`: Converts input into an integer.

### 2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.

### 3. With a face like mine, I do better in print

Handle the following conversion specifier:
- `b`: Converts the unsigned int argument to binary.

### 4. What one has not experienced, one will never understand in print

Handle the following conversion specifiers:
- `u`: Converts input into an unsigned integer.
- `o`: Converts input into an octal number.
- `x`: Converts input into a hexadecimal number.
- `X`: Converts input into a hexadecimal number with uppercase letters.

### 5. Nothing in fine print is ever good news

Use a local buffer of 1024 chars to minimize calls to `write`.

### 6. My weakness is wearing too much leopard print

Handle the following custom conversion specifier:
- `S`: Prints the string, with non-printable characters (ASCII < 32 or >= 127) printed as `\x`, followed by their hexadecimal code in uppercase, always two characters.

### 7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

Handle the following conversion specifier:
- `p`: Converts an `int` input to a pointer address.

### 8. The big print gives and the small print takes away

Handle the following flag characters for non-custom conversion specifiers:
- `+`: Adds `+` for positive numbers and `-` for negative numbers in signed conversions.
- `space`: Similar to `+`, but adds a space instead of `+` for positive numbers (overwritten by `+`).
- `#`: Adds `0` in front of octal conversions and `0x` or `0X` for hex conversions.

### 9. Sarcasm is lost in print

Handle the following length modifiers for non-custom conversion specifiers:
- `l`: Converts `d`, `i`, `u`, `o`, `x`, `X` to long signed or unsigned integers.
- `h`: Converts `d`, `i`, `u`, `o`, `x`, `X` to short signed or unsigned integers.

### 10. Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.

### 11. The negative is the equivalent of the composer's score, and the print the performance

Handle the precision for non-custom conversion specifiers.

### 12. It's depressing when you're still around and your albums are out of print

Handle the `0` flag character for non-custom conversion specifiers.

### 13. Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection

Handle the `-` flag character for non-custom conversion specifiers.

### 14. Print is the sharpest and the strongest weapon of our party

Handle the following custom conversion specifier:
- `r`: Prints the reversed string.

### 15. The flood of print has turned reading into a process of gulping rather than savoring

Handle the following custom conversion specifier:
- `R`: Prints the ROT13-encoded string.

### 16. *

All the above options work together seamlessly, integrating all conversion specifiers, flags, and custom behaviors.

---

## Requirements

- **Editors**: `vi`, `vim`, `emacs`
- **Compiler**: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding style**: Code must follow **Betty** style guidelines.
- **Restrictions**: No use of standard libraries (e.g., `printf`, `puts`).
- **Testing**: Example `main.c` files are provided for testing purposes but should not be pushed to the repository.

---

## Additional Information

The aim of this project is to encourage collaboration and foster a solid understanding of how formatted output works in C. Make sure to test thoroughly and document your code for easy maintenance and readability.

For more details on specific flags and specifiers, consult the [C Programming Documentation](https://en.cppreference.com/w/c/io).

---

Happy coding!
